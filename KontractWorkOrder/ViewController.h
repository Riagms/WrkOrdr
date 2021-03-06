//
//  ViewController.h
//  KontractWorkOrder
//
//  Created by Riya on 1/23/15.
//  Copyright (c) 2015 GMSIndia1. All rights reserved.
//

#import <UIKit/UIKit.h>
//#import "HomeViewController.h"
#include <ifaddrs.h>
#include <arpa/inet.h>
#include "PlanningViewController.h"

@interface ViewController : UIViewController
{
    BOOL recordResults;
    NSString*Naddress;
    NSString*logintime;
    NSString*devicename;
    NSString*devicenumber;
   
}

@property(strong,nonatomic)PlanningViewController *planctrl;



@property(strong,nonatomic)NSString*logindevice;

/* xmlparser*/
@property(strong,nonatomic)NSXMLParser *xmlParser;
@property(strong,nonatomic)NSMutableString *soapResults;
@property(strong,nonatomic)NSMutableData *webData;


/*IBOutlets*/
@property(strong,nonatomic)IBOutlet UITextField *usernametxtfld;
@property(strong,nonatomic)IBOutlet UITextField *passwordtxtfld;
@property(strong,nonatomic)IBOutlet UIButton *loginbutton;
@property(strong,nonatomic)IBOutlet UIScrollView *scroll;

- (IBAction)loginbtn:(id)sender;


@end
