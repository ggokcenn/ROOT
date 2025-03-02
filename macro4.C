{
    const int n_points=10;
    double x_val[n_points]={1,2,3,4,5,6,7,8,9,10};
    double y_val[n_points]={6,12,14,20,22,24,35,45,44,53};
    double y_err[n_points]={5,5,4.7,4.5,4.2,5.1,2.9,4.1,4.8,5.43};
    //Instance of graph
    auto graph = new TGraphErrors(n_points,x_val,y_val,nullptr,y_err);

    graph->Draw("APE");

    auto f= new TF1 ("Linear","[0]+x*[1]",.5,10.5);
    //Linear func. with 2 param [0]y-intercept,[1]slope
//y=mx+b m:slope b:y-intercept
//so the func is y=x ,you set the func.
    f-> SetLineColor(kRed);
    f-> SetLineStyle(2);
    //Fit it to graph
    graph-> Fit(f);

}
