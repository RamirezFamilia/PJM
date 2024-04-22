#include <stdio.h>
#include <stdlib.h>

struct Vehiculo
{
    float consumo_ciudad;        /* Consumo en ciudad (litros por 100 kilometro) */
    float consumo_carretera;     /* Consumo en carretera (litros por 100 kilometro) */
    float costo_seguro;          /* Costo del seguro anual */
    float costo_mantenimiento;   /* Costo del mantenimiento mensual */
    float precio_combustible;    /* Precio de la gasolina por galon */
    float depreciacion_5_anos;   /* Depreciación del vehiculo a 5 anos */
    float costo_gomas;           /* Costo de las gomas */
    float kilometros_gomas;        /* Kilometros que dan las gomas */
};

float calcular_costo_por_kilometro(struct Vehiculo vehiculo, float km, float ciudad, float carretera)
{
    float costo_total_anual = (vehiculo.costo_seguro * 5) + (vehiculo.costo_mantenimiento * 60) + (((km*5)/ vehiculo.kilometros_gomas) * vehiculo.costo_gomas) + (vehiculo.depreciacion_5_anos);

    float costo_por_kilometro = (((((((ciudad/100)*km*5) * (vehiculo.consumo_ciudad/100)) + (((carretera/100)*km*5) * (vehiculo.consumo_carretera/100))) /3.78541) * vehiculo.precio_combustible) + (costo_total_anual)) / (km*5);

    return costo_por_kilometro;
}

void guardar_vehiculo(struct Vehiculo vehiculo, const char *filename)
{
    FILE *fp = fopen(filename, "w");
    if (fp != NULL)
    {
        fprintf(fp, "Consumo en ciudad: %.2f\n", vehiculo.consumo_ciudad);
        fprintf(fp, "Consumo en carretera: %.2f\n", vehiculo.consumo_carretera);
        fprintf(fp, "Costo del seguro: %.2f\n", vehiculo.costo_seguro);
        fprintf(fp, "Costo del mantenimiento: %.2f\n", vehiculo.costo_mantenimiento);
        fprintf(fp, "Precio del combustible: %.2f\n", vehiculo.precio_combustible);
        fprintf(fp, "Depreciacion a 5 anos: %.2f\n", vehiculo.depreciacion_5_anos);
        fprintf(fp, "Costo de las gomas: %.2f\n", vehiculo.costo_gomas);
        fprintf(fp, "Kilometros que dan las gomas: %.2f\n", vehiculo.kilometros_gomas);
        fclose(fp);
        printf("Datos del vehiculo guardados correctamente en el archivo %s\n", filename);
    }
    else
    {
        printf("Error al abrir el archivo %s\n", filename);
    }
}

void cargar_vehiculo(struct Vehiculo *vehiculo, const char *filename)
{
    FILE *fp = fopen(filename, "r");
    if (fp != NULL)
    {
        fscanf(fp, "Consumo en ciudad: %f\n", &vehiculo->consumo_ciudad);
        fscanf(fp, "Consumo en carretera: %f\n", &vehiculo->consumo_carretera);
        fscanf(fp, "Costo del seguro: %f\n", &vehiculo->costo_seguro);
        fscanf(fp, "Costo del mantenimiento: %f\n", &vehiculo->costo_mantenimiento);
        fscanf(fp, "Precio del combustible: %f\n", &vehiculo->precio_combustible);
        fscanf(fp, "Depreciacion a 5 anos: %f\n", &vehiculo->depreciacion_5_anos);
        fscanf(fp, "Costo de las gomas: %f\n", &vehiculo->costo_gomas);
        fscanf(fp, "Kilometros que dan las gomas: %f\n", &vehiculo->kilometros_gomas);
        fclose(fp);
        printf("Datos del vehiculo cargados correctamente desde el archivo %s\n", filename);
    }
    else
    {
        printf("Error al abrir el archivo %s\n", filename);
    }
}

float calcular_costo_viaje(struct Vehiculo vehiculo, float viaje, float km, float consumo)
{
    float costo_viaje = ((((vehiculo.costo_seguro/km) * viaje) + ((km/12 * vehiculo.costo_mantenimiento) * viaje) + (viaje/vehiculo.kilometros_gomas) * vehiculo.costo_gomas)/(km*25) + ((viaje * (consumo/100) / (3.78541)) * vehiculo.precio_combustible));
    return costo_viaje;
}


int main()
{
    struct Vehiculo mi_vehiculo;
    float km;
    float ciudad;
    float carretera;
    float viaje;
    char opcion;

    do
    {
        cargar_vehiculo(&mi_vehiculo, "datos_vehiculo.txt");
        printf("Consumo en ciudad: %.2f\n", mi_vehiculo.consumo_ciudad);
        printf("Consumo en carretera: %.2f\n", mi_vehiculo.consumo_carretera);
        printf("Costo del seguro: %.2f\n", mi_vehiculo.costo_seguro);
        printf("Costo del mantenimiento: %.2f\n", mi_vehiculo.costo_mantenimiento);
        printf("Precio del combustible: %.2f\n", mi_vehiculo.precio_combustible);
        printf("Depreciacion a 5 anos: %.2f\n", mi_vehiculo.depreciacion_5_anos);
        printf("Costo de las gomas: %.2f\n", mi_vehiculo.costo_gomas);
        printf("Kilometros que dan las gomas: %.2f\n", mi_vehiculo.kilometros_gomas);
        printf("\n------------------------------ MENU -------------------------------\n");
        printf("|1. Calcular el vehicula a 5 anos utilizando los datos archivados |\n");
        printf("|2. Modificar archivo                                             |\n");
        printf("|3. calcular un viaje utilizando los datos archivados             |\n");
        printf("|0. Salir                                                         |\n");
        printf("-------------------------------------------------------------------\n");
        printf("Seleccione una opcion:");
        scanf(" %c", &opcion);


        switch(opcion)
        {
        case '1':
            cargar_vehiculo(&mi_vehiculo, "datos_vehiculo.txt");
            printf("Cuantos kilometros recorre en promedio por ano?: ");
            scanf("%f", &km);
            printf("que porcentaje fue en ciudad?: ");
            scanf("%f", &ciudad);
            printf("que porcentaje fue en carretera?: ");
            scanf("%f", &carretera);
            printf("El costo por kilometro del vehiculo es: %.2f\n", calcular_costo_por_kilometro(mi_vehiculo, km, ciudad, carretera));
            break;
        case '2':
            printf("Ingrese los datos del vehiculo:\n");
            printf("Consumo en ciudad (litros por 100 kilometro): ");
            scanf("%f", &mi_vehiculo.consumo_ciudad);
            printf("Consumo en carretera (litros por 100 kilometro): ");
            scanf("%f", &mi_vehiculo.consumo_carretera);
            printf("Costo del seguro (por ano): ");
            scanf("%f", &mi_vehiculo.costo_seguro);
            printf("Costo del mantenimiento (por mes): ");
            scanf("%f", &mi_vehiculo.costo_mantenimiento);
            printf("Precio del combustible (por galon): ");
            scanf("%f", &mi_vehiculo.precio_combustible);
            printf("Depreciacion a 5 anos: ");
            scanf("%f", &mi_vehiculo.depreciacion_5_anos);
            printf("Costo de las gomas: ");
            scanf("%f", &mi_vehiculo.costo_gomas);
            printf("Kilometros que dan las gomas: ");
            scanf("%f", &mi_vehiculo.kilometros_gomas);
            guardar_vehiculo(mi_vehiculo, "datos_vehiculo.txt");
            break;
        case '3':
            cargar_vehiculo(&mi_vehiculo, "datos_vehiculo.txt");
            printf("De cuantos kilometros es el viaje?: ");
            scanf("%f", &viaje);
            printf("Consumo combustible L | costo por KM | KM por galon | Costo del viaje\n");
            printf("---------------------------------------------------------------------\n");
            for (float consumo = 8; consumo <= 16; consumo++)
            {
                float costo_viaje = calcular_costo_viaje(mi_vehiculo, viaje, km, consumo);
                printf("%.2f                  |              |              | %.2f\n", consumo, costo_viaje);
            }
            printf("---------------------------------------------------------------------\n\n");
            break;
        case '0':
            printf("Saliendo del programa...\n");
            break;
        default:
            printf("Opcion invalida. Por favor seleccione una opcion valida.\n");
        }
    }
    while(opcion != '0');

    guardar_vehiculo(mi_vehiculo, "datos_vehiculo.txt");

    float costo_por_kilometro = calcular_costo_por_kilometro(mi_vehiculo, km, ciudad, carretera);
    printf("\nEl costo por kilometro del vehiculo es: %.2f \n\n", costo_por_kilometro);
    printf("************************************************************\n");

    return 0;
}
