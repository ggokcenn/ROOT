{
    const int n_points=10;
    double x_val[n_points]={1,2,3,4,5,6,7,8,9,10};
    double y_val[n_points]={6,12,14,20,22,24,35,45,44,53};
    double y_err[n_points]={5,5,4.7,4.5,4.2,5.1,2.9,4.1,4.8,5.43};
    //Instance of graph
    auto graph = new TGraphErrors(n_points,x_val,y_val,nullptr,y_err);

    graph->Draw("APE");
    graph->SetTitle("Measurement and fit");
    graph->GetXaxis()->SetTitle("lenght [cm]");
    graph->GetYaxis()->SetTitle("Arb. Unit");
    //define a function
    auto f= new TF1 ("Linear","[0]+x*[1]",.5,10.5);
    f-> SetLineColor(kRed);
    f-> SetLineStyle(2);
    //Fit it to graph
    graph-> Fit(f);

    auto legend = new TLegend(.1,.7,.3,.9,"Lab. Session");
//create TLegend object coordinates and header
//creates a  box starts at (0.1,0.7) and ends (0.3,0.9)
//range is 0-1
    legend->AddEntry(graph,"exp. points","PE");
//adds entry to legend,graphical object,label,PE:specifies the style
    legend->AddEntry(f,"th.function","L");
//adds entry,graphical obj,label,L:indicates style,line
    legend->Draw();

}
