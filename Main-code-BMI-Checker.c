#include <stdio.h>

int main() {
    int lang;
    float weight, height, bmi;

    printf("Select Language / انتخاب زبان\n");
    printf("1. English\n");
    printf("2. فارسی\n");
    printf("Choose / انتخاب: ");
    scanf("%d", &lang);

    printf("\n");

    if (lang == 1) {
        // English
        printf("BMI Calculator\n");
        printf("Enter your weight (kg): ");
        scanf("%f", &weight);

        printf("Enter your height (meters): ");
        scanf("%f", &height);

        bmi = weight / (height * height);

        printf("\nYour BMI is: %.2f\n", bmi);

        if (bmi < 18.5)
            printf("Status: Underweight\n");
        else if (bmi < 25)
            printf("Status: Normal weight\n");
        else if (bmi < 30)
            printf("Status: Overweight\n");
        else
            printf("Status: Obese\n");

    } else if (lang == 2) {
        // Persian
        printf("محاسبه‌گر BMI\n");
        printf("وزن خود را وارد کنید (کیلوگرم): ");
        scanf("%f", &weight);

        printf("قد خود را وارد کنید (متر): ");
        scanf("%f", &height);

        bmi = weight / (height * height);

        printf("\nشاخص BMI شما: %.2f\n", bmi);

        if (bmi < 18.5)
            printf("وضعیت: کم‌وزن\n");
        else if (bmi < 25)
            printf("وضعیت: وزن نرمال ✅\n");
        else if (bmi < 30)
            printf("وضعیت: اضافه‌وزن ⚠\n");
        else
            printf("وضعیت: چاقی ❌\n");

    } else {
        printf("Invalid Selection / انتخاب اشتباه!\n");
    }

    return 0;
}
