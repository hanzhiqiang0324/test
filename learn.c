int nArray[3] = {1,2,3};
int (*pArray)[3];
pArray = &nArray;
cout<<*pArray<<endl;
cout<<**pArray<<endl;