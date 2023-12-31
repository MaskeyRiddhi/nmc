int main(){
    int n;
    printf("Enter the elements:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n;i++){
        printf("Enter a number: \n");
        scanf("%d",&arr[i]);
    }
   
    int target;
    for (int i=0;i<n;i++){
      if (arr[n]== target){
        printf("The element is found");
    }
    }
    printf("The element is not found.");
    return 0;
}