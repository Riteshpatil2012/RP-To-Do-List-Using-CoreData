//
//  ViewController.h
//  RPCoreDataToDoLIst
//
//  Created by Student P_08 on 08/10/16.
//  Copyright © 2016 Ritesh Patil. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UITableViewDelegate,UITableViewDataSource>

- (IBAction)ActionAddBarButton:(id)sender;
@property (strong, nonatomic) IBOutlet UITableView *Tableview;

@end

