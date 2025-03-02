{
    const int n_points=10;
    double x_val[n_points]={1,2,3,4,5,6,7,8,9,10};
    double y_val[n_points]={6,12,14,20,22,24,35,45,44,53};
    double y_err[n_points]={5,5,4.7,4.5,4.2,5.1,2.9,4.1,4.8,5.43};

    auto graph = new TGraphErrors(n_points,x_val,y_val,nullptr,y_err);
    //This is a class to create a graph with error bars.
    //number of points,x,y,error val for x ,error val for y
    graph->Draw("APE");
    //draw graph on current canvas. A:axis,P:points,E:error bars
}
