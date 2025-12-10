string s;
getline(cin,s);
stringstream ss(s);
string word;// bo qua dau cach tach tung tu
while(ss >> word){
	cout<<word<<endl;
}
while(getline(ss,word,'-')){
	cout<<word<<endl;
}
// dung khi chi co dung mot dau cach
// trong truong hop co nhieu dau - thi chuyen het thanh dau cach

