trimRange_01L1()
{
  TH1F *good = new TH1F("good","good",5,0,5);
  TH1F *HotChannels = new TH1F("HotChannels","HotChannels",5,0,5);
  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("01L1.root");
  Int_t maskReason;
  Int_t trimRange;
  Int_t w_good=0;
  Int_t w_hot=0;

  Chain01->SetBranchAddress("trimRange",&trimRange);
  Chain01->SetBranchAddress("maskReason",&maskReason);

  long int nentries01=Chain01->GetEntries();

  for(long int ii=0;ii<nentries01;ii++)
  {
     Chain01->GetEntry(ii);
      if(maskReason==0)
          w_good=w_good+1;
   }
   cout<<"good channels="<<w_good<<endl;

  for(long int jj=0;jj<nentries01;jj++)
  {
     Chain01->GetEntry(jj);
     if(maskReason==1 || maskReason==3 || maskReason==5 || maskReason==7 || maskReason==9 || maskReason==11 || maskReason==13 || maskReason==15 || maskReason==17 || maskReason==19 || maskReason==21 || maskReason==23 || maskReason==25 || maskReason==27 || maskReason==29 || maskReason==31)
          w_hot=w_hot+1;
   }
   cout<<"hot channels="<<w_hot<<endl;

  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
      if(maskReason==0)
          good->Fill(trimRange,1./w_good);
   }
  for(long int j=0;j<nentries01;j++)
  {
     Chain01->GetEntry(j);
     if(maskReason==1 || maskReason==3 || maskReason==5 || maskReason==7 || maskReason==9 || maskReason==11 || maskReason==13 || maskReason==15 || maskReason==17 || maskReason==19 || maskReason==21 || maskReason==23 || maskReason==25 || maskReason==27 || maskReason==29 || maskReason==31)

         HotChannels->Fill(trimRange,1./w_hot);
   }

  TCanvas* c2=new TCanvas("c2","c2",800,800);
  gStyle->SetOptStat(0);
  HotChannels->SetLineColor(6);
  HotChannels->SetLineWidth(2);
  HotChannels->Draw("");
  HotChannels->GetYaxis()->SetRangeUser(0.,1.);
  good->SetLineColor(4);
  good->SetTitle("N vs trimRange 01L1;trimRange;N");
  good->SetLineWidth(2);
  good->Draw("same");

  leg = new TLegend(0.6,0.75,0.88,0.88,"","NDC");
  leg->SetBorderSize(0);
  leg->AddEntry(good,"good channels N=1","l");
  leg->AddEntry(HotChannels,"Hot Channels N=1","l");

  leg->Draw();

  c2->Print("N_TrimRange_01L1.pdf");

}

trimRange_27L1()
{
  TH1F *good = new TH1F("good","good",5,0,5);
  TH1F *HotChannels = new TH1F("HotChannels","HotChannels",5,0,5);
  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("27L1.root");
  Int_t maskReason;
  Int_t trimRange;
  Int_t w_good=0;
  Int_t w_hot=0;

  Chain01->SetBranchAddress("trimRange",&trimRange);
  Chain01->SetBranchAddress("maskReason",&maskReason);

  long int nentries01=Chain01->GetEntries();

  for(long int ii=0;ii<nentries01;ii++)
  {
     Chain01->GetEntry(ii);
      if(maskReason==0)
          w_good=w_good+1;
   }
   cout<<"good channels="<<w_good<<endl;

  for(long int jj=0;jj<nentries01;jj++)
  {
     Chain01->GetEntry(jj);
     if(maskReason==1 || maskReason==3 || maskReason==5 || maskReason==7 || maskReason==9 || maskReason==11 || maskReason==13 || maskReason==15 || maskReason==17 || maskReason==19 || maskReason==21 || maskReason==23 || maskReason==25 || maskReason==27 || maskReason==29 || maskReason==31)
          w_hot=w_hot+1;
   }
   cout<<"hot channels="<<w_hot<<endl;

  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
      if(maskReason==0)
          good->Fill(trimRange,1./w_good);
   }
  for(long int j=0;j<nentries01;j++)
  {
     Chain01->GetEntry(j);
     if(maskReason==1 || maskReason==3 || maskReason==5 || maskReason==7 || maskReason==9 || maskReason==11 || maskReason==13 || maskReason==15 || maskReason==17 || maskReason==19 || maskReason==21 || maskReason==23 || maskReason==25 || maskReason==27 || maskReason==29 || maskReason==31)

         HotChannels->Fill(trimRange,1./w_hot);
   }

  TCanvas* c2=new TCanvas("c2","c2",800,800);
  gStyle->SetOptStat(0);
  HotChannels->SetLineColor(6);
  HotChannels->SetLineWidth(2);
  HotChannels->Draw("");
  HotChannels->GetYaxis()->SetRangeUser(0.,1.);
  good->SetLineColor(4);
  good->SetTitle("N vs trimRange 27L1;trimRange;N");
  good->SetLineWidth(2);
  good->Draw("same");

  leg = new TLegend(0.6,0.75,0.88,0.88,"","NDC");
  leg->SetBorderSize(0);
  leg->AddEntry(good,"good channels N=1","l");
  leg->AddEntry(HotChannels,"Hot Channels N=1","l");

  leg->Draw();

  c2->Print("N_TrimRange_27L1.pdf");

}

trimRange_27L2()
{
  TH1F *good = new TH1F("good","good",5,0,5);
  TH1F *HotChannels = new TH1F("HotChannels","HotChannels",5,0,5);
  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("27L2.root");
  Int_t maskReason;
  Int_t trimRange;
  Int_t w_good=0;
  Int_t w_hot=0;

  Chain01->SetBranchAddress("trimRange",&trimRange);
  Chain01->SetBranchAddress("maskReason",&maskReason);

  long int nentries01=Chain01->GetEntries();

  for(long int ii=0;ii<nentries01;ii++)
  {
     Chain01->GetEntry(ii);
      if(maskReason==0)
          w_good=w_good+1;
   }
   cout<<"good channels="<<w_good<<endl;

  for(long int jj=0;jj<nentries01;jj++)
  {
     Chain01->GetEntry(jj);
     if(maskReason==1 || maskReason==3 || maskReason==5 || maskReason==7 || maskReason==9 || maskReason==11 || maskReason==13 || maskReason==15 || maskReason==17 || maskReason==19 || maskReason==21 || maskReason==23 || maskReason==25 || maskReason==27 || maskReason==29 || maskReason==31)
          w_hot=w_hot+1;
   }
   cout<<"hot channels="<<w_hot<<endl;

  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
      if(maskReason==0)
          good->Fill(trimRange,1./w_good);
   }
  for(long int j=0;j<nentries01;j++)
  {
     Chain01->GetEntry(j);
     if(maskReason==1 || maskReason==3 || maskReason==5 || maskReason==7 || maskReason==9 || maskReason==11 || maskReason==13 || maskReason==15 || maskReason==17 || maskReason==19 || maskReason==21 || maskReason==23 || maskReason==25 || maskReason==27 || maskReason==29 || maskReason==31)

         HotChannels->Fill(trimRange,1./w_hot);
   }

  TCanvas* c2=new TCanvas("c2","c2",800,800);
  gStyle->SetOptStat(0);
  HotChannels->SetLineColor(6);
  HotChannels->SetLineWidth(2);
  HotChannels->Draw("");
  HotChannels->GetYaxis()->SetRangeUser(0.,1.);
  good->SetLineColor(4);
  good->SetTitle("N vs trimRange 27L2;trimRange;N");
  good->SetLineWidth(2);
  good->Draw("same");

  leg = new TLegend(0.6,0.75,0.88,0.88,"","NDC");
  leg->SetBorderSize(0);
  leg->AddEntry(good,"good channels N=1","l");
  leg->AddEntry(HotChannels,"Hot Channels N=1","l");

  leg->Draw();

  c2->Print("N_TrimRange_27L2.pdf");

}

trimRange_28L1()
{
  TH1F *good = new TH1F("good","good",5,0,5);
  TH1F *HotChannels = new TH1F("HotChannels","HotChannels",5,0,5);
  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("28L1.root");
  Int_t maskReason;
  Int_t trimRange;
  Int_t w_good=0;
  Int_t w_hot=0;

  Chain01->SetBranchAddress("trimRange",&trimRange);
  Chain01->SetBranchAddress("maskReason",&maskReason);

  long int nentries01=Chain01->GetEntries();

  for(long int ii=0;ii<nentries01;ii++)
  {
     Chain01->GetEntry(ii);
      if(maskReason==0)
          w_good=w_good+1;
   }
   cout<<"good channels="<<w_good<<endl;

  for(long int jj=0;jj<nentries01;jj++)
  {
     Chain01->GetEntry(jj);
     if(maskReason==1 || maskReason==3 || maskReason==5 || maskReason==7 || maskReason==9 || maskReason==11 || maskReason==13 || maskReason==15 || maskReason==17 || maskReason==19 || maskReason==21 || maskReason==23 || maskReason==25 || maskReason==27 || maskReason==29 || maskReason==31)
          w_hot=w_hot+1;
   }
   cout<<"hot channels="<<w_hot<<endl;

  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
      if(maskReason==0)
          good->Fill(trimRange,1./w_good);
   }
  for(long int j=0;j<nentries01;j++)
  {
     Chain01->GetEntry(j);
     if(maskReason==1 || maskReason==3 || maskReason==5 || maskReason==7 || maskReason==9 || maskReason==11 || maskReason==13 || maskReason==15 || maskReason==17 || maskReason==19 || maskReason==21 || maskReason==23 || maskReason==25 || maskReason==27 || maskReason==29 || maskReason==31)

         HotChannels->Fill(trimRange,1./w_hot);
   }

  TCanvas* c2=new TCanvas("c2","c2",800,800);
  gStyle->SetOptStat(0);
  HotChannels->SetLineColor(6);
  HotChannels->SetLineWidth(2);
  HotChannels->Draw("");
  HotChannels->GetYaxis()->SetRangeUser(0.,1.);
  good->SetLineColor(4);
  good->SetTitle("N vs trimRange 28L1;trimRange;N");
  good->SetLineWidth(2);
  good->Draw("same");

  leg = new TLegend(0.6,0.75,0.88,0.88,"","NDC");
  leg->SetBorderSize(0);
  leg->AddEntry(good,"good channels N=1","l");
  leg->AddEntry(HotChannels,"Hot Channels N=1","l");

  leg->Draw();

  c2->Print("N_TrimRange_28L1.pdf");

}

trimRange_28L2()
{
  TH1F *good = new TH1F("good","good",5,0,5);
  TH1F *HotChannels = new TH1F("HotChannels","HotChannels",5,0,5);
  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("28L2.root");
  Int_t maskReason;
  Int_t trimRange;
  Int_t w_good=0;
  Int_t w_hot=0;

  Chain01->SetBranchAddress("trimRange",&trimRange);
  Chain01->SetBranchAddress("maskReason",&maskReason);

  long int nentries01=Chain01->GetEntries();

  for(long int ii=0;ii<nentries01;ii++)
  {
     Chain01->GetEntry(ii);
      if(maskReason==0)
          w_good=w_good+1;
   }
   cout<<"good channels="<<w_good<<endl;

  for(long int jj=0;jj<nentries01;jj++)
  {
     Chain01->GetEntry(jj);
     if(maskReason==1 || maskReason==3 || maskReason==5 || maskReason==7 || maskReason==9 || maskReason==11 || maskReason==13 || maskReason==15 || maskReason==17 || maskReason==19 || maskReason==21 || maskReason==23 || maskReason==25 || maskReason==27 || maskReason==29 || maskReason==31)
          w_hot=w_hot+1;
   }
   cout<<"hot channels="<<w_hot<<endl;

  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
      if(maskReason==0)
          good->Fill(trimRange,1./w_good);
   }
  for(long int j=0;j<nentries01;j++)
  {
     Chain01->GetEntry(j);
     if(maskReason==1 || maskReason==3 || maskReason==5 || maskReason==7 || maskReason==9 || maskReason==11 || maskReason==13 || maskReason==15 || maskReason==17 || maskReason==19 || maskReason==21 || maskReason==23 || maskReason==25 || maskReason==27 || maskReason==29 || maskReason==31)

         HotChannels->Fill(trimRange,1./w_hot);
   }

  TCanvas* c2=new TCanvas("c2","c2",800,800);
  gStyle->SetOptStat(0);
  HotChannels->SetLineColor(6);
  HotChannels->SetLineWidth(2);
  HotChannels->Draw("");
  HotChannels->GetYaxis()->SetRangeUser(0.,1.);
  good->SetLineColor(4);
  good->SetTitle("N vs trimRange 28L2;trimRange;N");
  good->SetLineWidth(2);
  good->Draw("same");

  leg = new TLegend(0.6,0.75,0.88,0.88,"","NDC");
  leg->SetBorderSize(0);
  leg->AddEntry(good,"good channels N=1","l");
  leg->AddEntry(HotChannels,"Hot Channels N=1","l");

  leg->Draw();

  c2->Print("N_TrimRange_28L2.pdf");

}

trimRange_29L1()
{
  TH1F *good = new TH1F("good","good",5,0,5);
  TH1F *HotChannels = new TH1F("HotChannels","HotChannels",5,0,5);
  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("29L1.root");
  Int_t maskReason;
  Int_t trimRange;
  Int_t w_good=0;
  Int_t w_hot=0;

  Chain01->SetBranchAddress("trimRange",&trimRange);
  Chain01->SetBranchAddress("maskReason",&maskReason);

  long int nentries01=Chain01->GetEntries();

  for(long int ii=0;ii<nentries01;ii++)
  {
     Chain01->GetEntry(ii);
      if(maskReason==0)
          w_good=w_good+1;
   }
   cout<<"good channels="<<w_good<<endl;

  for(long int jj=0;jj<nentries01;jj++)
  {
     Chain01->GetEntry(jj);
     if(maskReason==1 || maskReason==3 || maskReason==5 || maskReason==7 || maskReason==9 || maskReason==11 || maskReason==13 || maskReason==15 || maskReason==17 || maskReason==19 || maskReason==21 || maskReason==23 || maskReason==25 || maskReason==27 || maskReason==29 || maskReason==31)
          w_hot=w_hot+1;
   }
   cout<<"hot channels="<<w_hot<<endl;

  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
      if(maskReason==0)
          good->Fill(trimRange,1./w_good);
   }
  for(long int j=0;j<nentries01;j++)
  {
     Chain01->GetEntry(j);
     if(maskReason==1 || maskReason==3 || maskReason==5 || maskReason==7 || maskReason==9 || maskReason==11 || maskReason==13 || maskReason==15 || maskReason==17 || maskReason==19 || maskReason==21 || maskReason==23 || maskReason==25 || maskReason==27 || maskReason==29 || maskReason==31)

         HotChannels->Fill(trimRange,1./w_hot);
   }

  TCanvas* c2=new TCanvas("c2","c2",800,800);
  gStyle->SetOptStat(0);
  HotChannels->SetLineColor(6);
  HotChannels->SetLineWidth(2);
  HotChannels->Draw("");
  HotChannels->GetYaxis()->SetRangeUser(0.,1.);
  good->SetLineColor(4);
  good->SetTitle("N vs trimRange 29L1;trimRange;N");
  good->SetLineWidth(2);
  good->Draw("same");

  leg = new TLegend(0.6,0.75,0.88,0.88,"","NDC");
  leg->SetBorderSize(0);
  leg->AddEntry(good,"good channels N=1","l");
  leg->AddEntry(HotChannels,"Hot Channels N=1","l");

  leg->Draw();

  c2->Print("N_TrimRange_29L1.pdf");

}

trimRange_30L1()
{
  TH1F *good = new TH1F("good","good",5,0,5);
  TH1F *HotChannels = new TH1F("HotChannels","HotChannels",5,0,5);
  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("30L1.root");
  Int_t maskReason;
  Int_t trimRange;
  Int_t w_good=0;
  Int_t w_hot=0;

  Chain01->SetBranchAddress("trimRange",&trimRange);
  Chain01->SetBranchAddress("maskReason",&maskReason);

  long int nentries01=Chain01->GetEntries();

  for(long int ii=0;ii<nentries01;ii++)
  {
     Chain01->GetEntry(ii);
      if(maskReason==0)
          w_good=w_good+1;
   }
   cout<<"good channels="<<w_good<<endl;

  for(long int jj=0;jj<nentries01;jj++)
  {
     Chain01->GetEntry(jj);
     if(maskReason==1 || maskReason==3 || maskReason==5 || maskReason==7 || maskReason==9 || maskReason==11 || maskReason==13 || maskReason==15 || maskReason==17 || maskReason==19 || maskReason==21 || maskReason==23 || maskReason==25 || maskReason==27 || maskReason==29 || maskReason==31)
          w_hot=w_hot+1;
   }
   cout<<"hot channels="<<w_hot<<endl;

  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
      if(maskReason==0)
          good->Fill(trimRange,1./w_good);
   }
  for(long int j=0;j<nentries01;j++)
  {
     Chain01->GetEntry(j);
     if(maskReason==1 || maskReason==3 || maskReason==5 || maskReason==7 || maskReason==9 || maskReason==11 || maskReason==13 || maskReason==15 || maskReason==17 || maskReason==19 || maskReason==21 || maskReason==23 || maskReason==25 || maskReason==27 || maskReason==29 || maskReason==31)

         HotChannels->Fill(trimRange,1./w_hot);
   }

  TCanvas* c2=new TCanvas("c2","c2",800,800);
  gStyle->SetOptStat(0);
  HotChannels->SetLineColor(6);
  HotChannels->SetLineWidth(2);
  HotChannels->Draw("");
  HotChannels->GetYaxis()->SetRangeUser(0.,1.);
  good->SetLineColor(4);
  good->SetTitle("N vs trimRange 30L1;trimRange;N");
  good->SetLineWidth(2);
  good->Draw("same");

  leg = new TLegend(0.6,0.75,0.88,0.88,"","NDC");
  leg->SetBorderSize(0);
  leg->AddEntry(good,"good channels N=1","l");
  leg->AddEntry(HotChannels,"Hot Channels N=1","l");

  leg->Draw();

  c2->Print("N_TrimRange_30L1.pdf");

}

trimRange_30L2()
{
  TH1F *good = new TH1F("good","good",5,0,5);
  TH1F *HotChannels = new TH1F("HotChannels","HotChannels",5,0,5);
  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("30L2.root");
  Int_t maskReason;
  Int_t trimRange;
  Int_t w_good=0;
  Int_t w_hot=0;

  Chain01->SetBranchAddress("trimRange",&trimRange);
  Chain01->SetBranchAddress("maskReason",&maskReason);

  long int nentries01=Chain01->GetEntries();

  for(long int ii=0;ii<nentries01;ii++)
  {
     Chain01->GetEntry(ii);
      if(maskReason==0)
          w_good=w_good+1;
   }
   cout<<"good channels="<<w_good<<endl;

  for(long int jj=0;jj<nentries01;jj++)
  {
     Chain01->GetEntry(jj);
     if(maskReason==1 || maskReason==3 || maskReason==5 || maskReason==7 || maskReason==9 || maskReason==11 || maskReason==13 || maskReason==15 || maskReason==17 || maskReason==19 || maskReason==21 || maskReason==23 || maskReason==25 || maskReason==27 || maskReason==29 || maskReason==31)
          w_hot=w_hot+1;
   }
   cout<<"hot channels="<<w_hot<<endl;

  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
      if(maskReason==0)
          good->Fill(trimRange,1./w_good);
   }
  for(long int j=0;j<nentries01;j++)
  {
     Chain01->GetEntry(j);
     if(maskReason==1 || maskReason==3 || maskReason==5 || maskReason==7 || maskReason==9 || maskReason==11 || maskReason==13 || maskReason==15 || maskReason==17 || maskReason==19 || maskReason==21 || maskReason==23 || maskReason==25 || maskReason==27 || maskReason==29 || maskReason==31)

         HotChannels->Fill(trimRange,1./w_hot);
   }

  TCanvas* c2=new TCanvas("c2","c2",800,800);
  gStyle->SetOptStat(0);
  HotChannels->SetLineColor(6);
  HotChannels->SetLineWidth(2);
  HotChannels->Draw("");
  HotChannels->GetYaxis()->SetRangeUser(0.,1.);
  good->SetLineColor(4);
  good->SetTitle("N vs trimRange 30L2;trimRange;N");
  good->SetLineWidth(2);
  good->Draw("same");

  leg = new TLegend(0.6,0.75,0.88,0.88,"","NDC");
  leg->SetBorderSize(0);
  leg->AddEntry(good,"good channels N=1","l");
  leg->AddEntry(HotChannels,"Hot Channels N=1","l");

  leg->Draw();

  c2->Print("N_TrimRange_30L2.pdf");

}

trimRange_allchambers()
{
  TH1F *good = new TH1F("good","good",5,0,5);
  TH1F *HotChannels = new TH1F("HotChannels","HotChannels",5,0,5);
  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("allchambers.root");
  Int_t maskReason;
  Int_t trimRange;
  Int_t w_good=0;
  Int_t w_hot=0;

  Chain01->SetBranchAddress("trimRange",&trimRange);
  Chain01->SetBranchAddress("maskReason",&maskReason);

  long int nentries01=Chain01->GetEntries();

  for(long int ii=0;ii<nentries01;ii++)
  {
     Chain01->GetEntry(ii);
      if(maskReason==0)
          w_good=w_good+1;
   }
   cout<<"good channels="<<w_good<<endl;

  for(long int jj=0;jj<nentries01;jj++)
  {
     Chain01->GetEntry(jj);
     if(maskReason==1 || maskReason==3 || maskReason==5 || maskReason==7 || maskReason==9 || maskReason==11 || maskReason==13 || maskReason==15 || maskReason==17 || maskReason==19 || maskReason==21 || maskReason==23 || maskReason==25 || maskReason==27 || maskReason==29 || maskReason==31)
          w_hot=w_hot+1;
   }
   cout<<"hot channels="<<w_hot<<endl;

  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
      if(maskReason==0)
          good->Fill(trimRange,1./w_good);
   }
  for(long int j=0;j<nentries01;j++)
  {
     Chain01->GetEntry(j);
     if(maskReason==1 || maskReason==3 || maskReason==5 || maskReason==7 || maskReason==9 || maskReason==11 || maskReason==13 || maskReason==15 || maskReason==17 || maskReason==19 || maskReason==21 || maskReason==23 || maskReason==25 || maskReason==27 || maskReason==29 || maskReason==31)

         HotChannels->Fill(trimRange,1./w_hot);
   }

  TCanvas* c2=new TCanvas("c2","c2",800,800);
  gStyle->SetOptStat(0);
  HotChannels->SetLineColor(6);
  HotChannels->SetLineWidth(2);
  HotChannels->Draw("");
  HotChannels->GetYaxis()->SetRangeUser(0.,1.);
  good->SetLineColor(4);
  good->SetTitle("N vs trimRange allchambers;trimRange;N");
  good->SetLineWidth(2);
  good->Draw("same");

  leg = new TLegend(0.6,0.75,0.88,0.88,"","NDC");
  leg->SetBorderSize(0);
  leg->AddEntry(good,"good channels N=1","l");
  leg->AddEntry(HotChannels,"Hot Channels N=1","l");

  leg->Draw();

  c2->Print("N_TrimRange_allchambers.pdf");

}

void trimRange_full_N(){

    trimRange_allchambers();
    trimRange_01L1();
    trimRange_27L1();
    trimRange_27L2();
    trimRange_28L1();
    trimRange_28L2();
    trimRange_29L1();
    trimRange_30L1();
    trimRange_30L2();
}

