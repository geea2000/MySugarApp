//
//  MySugarDataViewController.h
//  MySugarApp
//
//  Created by Charles Konkol on 3/18/13.
//  Copyright (c) 2013 RVC Student. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MySugarDataViewController : UIViewController
//add objects init

@property (strong, nonatomic) IBOutlet UITextView *ViewData;

- (IBAction)btnClear:(id)sender;
@end
