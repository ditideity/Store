//Setting up checker that compares consequtive terms are sorting is transitive
void checker(int list[],int s,int s2,int n){
    for (s=0;s<n;s++){
        s2=s+1;
    if (list[s]<list[s2]){
        printf("\n%d,%d: Not sorted in descending order anymore\nVERDICT: not sorted",list[s],list[s2]);
        return;
    }
    else{
    printf("\n%d,%d: Sorted in descending order",list[s],list[s2]);
    }
}
}
void main(){
    int x;
    int A[3];
    int i;
    for(i=0;i<4;i++){
        printf("Enter one element of the array: \n");
        scanf("%d",&A[i]);
  }

  printf("Content of the array\n");

  for(i=0;i<4;i++)
  {
    printf("%d\t",A[i]);
  }
    checker(A,0,1,4);
}
