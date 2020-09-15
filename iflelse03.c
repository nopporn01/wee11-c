void student3(){
    int number1,number2;
    printf("student 3\n");
    printf("Enter two integer:");
    scanf("%d %d",&number1,&number2);
    if(number1==number2){
        printf("Result: %d=%d",number1,number2);
    }
    else if(number1>number2){
        printf("Result: %d>%d",number1,number2);
    }
    else{
        printf("Result %d<%d",number1,number2);
    }
}
