void write_to_file(){

TH1F h("my_histogram", "My_Title",100,-5,5);
h.FillRandom("gaus");//fill rand the hist


TFile out_file("my_rootfile.root", "RECREATE");
//creates a file,
//RECREATE:if file exists,overwrite
//NEW:create new, if same file exist it fails
//UPDATE:opens and if not exists creates one
//READ: reads only
h.Write();//writes the hist
out_file.Close();

}
