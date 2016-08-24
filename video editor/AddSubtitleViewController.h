//
//  AddSubtitleViewController.h
//  video editor
//
//  Created by Sekou Perry on 8/23/16.
//  Copyright © 2016 Sekou Perry. All rights reserved.
//

#import "CommonVideoViewController.h"

@interface AddSubtitleViewController : CommonVideoViewController


@property (weak, nonatomic) IBOutlet UITextField *subTitle1;
- (IBAction)loadAsset:(id)sender;
- (IBAction)generateOutput:(id)sender;

@end
