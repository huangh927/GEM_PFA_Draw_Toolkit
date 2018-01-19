noise_01L1_good_position_4eta()
{
  TH2F *Noise = new TH2F("Noise","Noise",4,1,5,30,0.,15.);

  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("01L1.root");

  Int_t maskReason;
  Int_t vfatN;
  Float_t noise;
  Int_t Group;

  Chain01->SetBranchAddress("maskReason",&maskReason);
  Chain01->SetBranchAddress("vfatN",&vfatN);
  Chain01->SetBranchAddress("noise",&noise);

  long int nentries01=Chain01->GetEntries();

  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
     if(vfatN==6 || vfatN==7 || vfatN==14 || vfatN==15 || vfatN==22 || vfatN==23) {Group=1;}
     else if(vfatN==4 || vfatN==5 || vfatN==12 || vfatN==13 || vfatN==20 || vfatN==21) {Group=2;}
     else if(vfatN==2 || vfatN==3 || vfatN==10 || vfatN==11 || vfatN==18 || vfatN==19) {Group=3;}
     else {Group=4;}
     if(maskReason==0)
         Noise->Fill(Group,noise);
   }

  TCanvas* c2=new TCanvas("c2","c2",800,800);
  gStyle->SetOptStat(0);
  Noise->SetTitle("noise vs Group 01L1;Group;noise");
  Noise->Draw("colztext");

  c2->Print("4eta_Noise_position_01L1_good.pdf");

}

noise_27L1_good_position_4eta()
{
  TH2F *Noise = new TH2F("Noise","Noise",4,1,5,30,0.,15.);

  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("27L1.root");

  Int_t maskReason;
  Int_t vfatN;
  Float_t noise;
  Int_t Group;

  Chain01->SetBranchAddress("maskReason",&maskReason);
  Chain01->SetBranchAddress("vfatN",&vfatN);
  Chain01->SetBranchAddress("noise",&noise);

  long int nentries01=Chain01->GetEntries();

  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
     if(vfatN==6 || vfatN==7 || vfatN==14 || vfatN==15 || vfatN==22 || vfatN==23) {Group=1;}
     else if(vfatN==4 || vfatN==5 || vfatN==12 || vfatN==13 || vfatN==20 || vfatN==21) {Group=2;}
     else if(vfatN==2 || vfatN==3 || vfatN==10 || vfatN==11 || vfatN==18 || vfatN==19) {Group=3;}
     else {Group=4;}
     if(maskReason==0)
         Noise->Fill(Group,noise);
   }

  TCanvas* c2=new TCanvas("c2","c2",800,800);
  gStyle->SetOptStat(0);
  Noise->SetTitle("noise vs Group 27L1;Group;noise");
  Noise->Draw("colztext");

  c2->Print("4eta_Noise_position_27L1_good.pdf");

}

noise_27L2_good_position_4eta()
{
  TH2F *Noise = new TH2F("Noise","Noise",4,1,5,30,0.,15.);

  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("27L2.root");

  Int_t maskReason;
  Int_t vfatN;
  Float_t noise;
  Int_t Group;

  Chain01->SetBranchAddress("maskReason",&maskReason);
  Chain01->SetBranchAddress("vfatN",&vfatN);
  Chain01->SetBranchAddress("noise",&noise);

  long int nentries01=Chain01->GetEntries();

  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
     if(vfatN==6 || vfatN==7 || vfatN==14 || vfatN==15 || vfatN==22 || vfatN==23) {Group=1;}
     else if(vfatN==4 || vfatN==5 || vfatN==12 || vfatN==13 || vfatN==20 || vfatN==21) {Group=2;}
     else if(vfatN==2 || vfatN==3 || vfatN==10 || vfatN==11 || vfatN==18 || vfatN==19) {Group=3;}
     else {Group=4;}
     if(maskReason==0)
         Noise->Fill(Group,noise);
   }

  TCanvas* c2=new TCanvas("c2","c2",800,800);
  gStyle->SetOptStat(0);
  Noise->SetTitle("noise vs Group 27L2;Group;noise");
  Noise->Draw("colztext");

  c2->Print("4eta_Noise_position_27L2_good.pdf");

}

noise_28L1_good_position_4eta()
{
  TH2F *Noise = new TH2F("Noise","Noise",4,1,5,30,0.,15.);

  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("28L1.root");

  Int_t maskReason;
  Int_t vfatN;
  Float_t noise;
  Int_t Group;

  Chain01->SetBranchAddress("maskReason",&maskReason);
  Chain01->SetBranchAddress("vfatN",&vfatN);
  Chain01->SetBranchAddress("noise",&noise);

  long int nentries01=Chain01->GetEntries();

  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
     if(vfatN==6 || vfatN==7 || vfatN==14 || vfatN==15 || vfatN==22 || vfatN==23) {Group=1;}
     else if(vfatN==4 || vfatN==5 || vfatN==12 || vfatN==13 || vfatN==20 || vfatN==21) {Group=2;}
     else if(vfatN==2 || vfatN==3 || vfatN==10 || vfatN==11 || vfatN==18 || vfatN==19) {Group=3;}
     else {Group=4;}
     if(maskReason==0)
         Noise->Fill(Group,noise);
   }

  TCanvas* c2=new TCanvas("c2","c2",800,800);
  gStyle->SetOptStat(0);
  Noise->SetTitle("noise vs Group 28L1;Group;noise");
  Noise->Draw("colztext");

  c2->Print("4eta_Noise_position_28L1_good.pdf");

}

noise_28L2_good_position_4eta()
{
  TH2F *Noise = new TH2F("Noise","Noise",4,1,5,30,0.,15.);

  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("28L2.root");

  Int_t maskReason;
  Int_t vfatN;
  Float_t noise;
  Int_t Group;

  Chain01->SetBranchAddress("maskReason",&maskReason);
  Chain01->SetBranchAddress("vfatN",&vfatN);
  Chain01->SetBranchAddress("noise",&noise);

  long int nentries01=Chain01->GetEntries();

  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
     if(vfatN==6 || vfatN==7 || vfatN==14 || vfatN==15 || vfatN==22 || vfatN==23) {Group=1;}
     else if(vfatN==4 || vfatN==5 || vfatN==12 || vfatN==13 || vfatN==20 || vfatN==21) {Group=2;}
     else if(vfatN==2 || vfatN==3 || vfatN==10 || vfatN==11 || vfatN==18 || vfatN==19) {Group=3;}
     else {Group=4;}
     if(maskReason==0)
         Noise->Fill(Group,noise);
   }

  TCanvas* c2=new TCanvas("c2","c2",800,800);
  gStyle->SetOptStat(0);
  Noise->SetTitle("noise vs Group 28L2;Group;noise");
  Noise->Draw("colztext");

  c2->Print("4eta_Noise_position_28L2_good.pdf");

}

noise_29L1_good_position_4eta()
{
  TH2F *Noise = new TH2F("Noise","Noise",4,1,5,30,0.,15.);

  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("29L1.root");

  Int_t maskReason;
  Int_t vfatN;
  Float_t noise;
  Int_t Group;

  Chain01->SetBranchAddress("maskReason",&maskReason);
  Chain01->SetBranchAddress("vfatN",&vfatN);
  Chain01->SetBranchAddress("noise",&noise);

  long int nentries01=Chain01->GetEntries();

  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
     if(vfatN==6 || vfatN==7 || vfatN==14 || vfatN==15 || vfatN==22 || vfatN==23) {Group=1;}
     else if(vfatN==4 || vfatN==5 || vfatN==12 || vfatN==13 || vfatN==20 || vfatN==21) {Group=2;}
     else if(vfatN==2 || vfatN==3 || vfatN==10 || vfatN==11 || vfatN==18 || vfatN==19) {Group=3;}
     else {Group=4;}
     if(maskReason==0)
         Noise->Fill(Group,noise);
   }

  TCanvas* c2=new TCanvas("c2","c2",800,800);
  gStyle->SetOptStat(0);
  Noise->SetTitle("noise vs Group 29L1;Group;noise");
  Noise->Draw("colztext");

  c2->Print("4eta_Noise_position_29L1_good.pdf");

}

noise_30L1_good_position_4eta()
{
  TH2F *Noise = new TH2F("Noise","Noise",4,1,5,30,0.,15.);

  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("30L1.root");

  Int_t maskReason;
  Int_t vfatN;
  Float_t noise;
  Int_t Group;

  Chain01->SetBranchAddress("maskReason",&maskReason);
  Chain01->SetBranchAddress("vfatN",&vfatN);
  Chain01->SetBranchAddress("noise",&noise);

  long int nentries01=Chain01->GetEntries();

  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
     if(vfatN==6 || vfatN==7 || vfatN==14 || vfatN==15 || vfatN==22 || vfatN==23) {Group=1;}
     else if(vfatN==4 || vfatN==5 || vfatN==12 || vfatN==13 || vfatN==20 || vfatN==21) {Group=2;}
     else if(vfatN==2 || vfatN==3 || vfatN==10 || vfatN==11 || vfatN==18 || vfatN==19) {Group=3;}
     else {Group=4;}
     if(maskReason==0)
         Noise->Fill(Group,noise);
   }

  TCanvas* c2=new TCanvas("c2","c2",800,800);
  gStyle->SetOptStat(0);
  Noise->SetTitle("noise vs Group 30L1;Group;noise");
  Noise->Draw("colztext");

  c2->Print("4eta_Noise_position_30L1_good.pdf");

}

noise_30L2_good_position_4eta()
{
  TH2F *Noise = new TH2F("Noise","Noise",4,1,5,30,0.,15.);

  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("30L2.root");

  Int_t maskReason;
  Int_t vfatN;
  Float_t noise;
  Int_t Group;

  Chain01->SetBranchAddress("maskReason",&maskReason);
  Chain01->SetBranchAddress("vfatN",&vfatN);
  Chain01->SetBranchAddress("noise",&noise);

  long int nentries01=Chain01->GetEntries();

  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
     if(vfatN==6 || vfatN==7 || vfatN==14 || vfatN==15 || vfatN==22 || vfatN==23) {Group=1;}
     else if(vfatN==4 || vfatN==5 || vfatN==12 || vfatN==13 || vfatN==20 || vfatN==21) {Group=2;}
     else if(vfatN==2 || vfatN==3 || vfatN==10 || vfatN==11 || vfatN==18 || vfatN==19) {Group=3;}
     else {Group=4;}
     if(maskReason==0)
         Noise->Fill(Group,noise);
   }

  TCanvas* c2=new TCanvas("c2","c2",800,800);
  gStyle->SetOptStat(0);
  Noise->SetTitle("noise vs Group 30L2;Group;noise");
  Noise->Draw("colztext");

  c2->Print("4eta_Noise_position_30L2_good.pdf");

}


void noise_full_good_position_4eta(){

    noise_01L1_good_position_4eta();
    noise_27L1_good_position_4eta();
    noise_27L2_good_position_4eta();
    noise_28L1_good_position_4eta();
    noise_28L2_good_position_4eta();
    noise_29L1_good_position_4eta();
    noise_30L1_good_position_4eta();
    noise_30L2_good_position_4eta();
}

