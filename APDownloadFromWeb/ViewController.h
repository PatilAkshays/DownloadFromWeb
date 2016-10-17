//
//  ViewController.h
//  APDownloadFromWeb
//
//  Created by Mac on 24/07/1938 Saka.
//  Copyright © 1938 Saka Aksh. All rights reserved.
//


#define kFirstImageURLString @"http://images5.fanpop.com/image/photos/31500000/Doremon-doremon-31525826-454-500.jpg"


#define kSecondImageURLString @"https://shechive.files.wordpress.com/2012/06/cute-cartoons-21.jpg"

#define kThirdImageURLString @"http://kingofwallpapers.com/cartoon-picture/cartoon-picture-010.jpg"

#import <UIKit/UIKit.h>


@interface ViewController : UIViewController

@property (strong, nonatomic) IBOutlet UIImageView *myFirstImageView;

- (IBAction)startDowloadButton:(id)sender;

@property (strong, nonatomic) IBOutlet UIActivityIndicatorView *myFirstImageDownloadIndicator;

@property (strong, nonatomic) IBOutlet UIImageView *mySecondImageView;

@property (strong, nonatomic) IBOutlet UIActivityIndicatorView *mySecondImageDownloadIndicator;

@property (strong, nonatomic) IBOutlet UIImageView *myThirdImageView;

@property (strong, nonatomic) IBOutlet UIActivityIndicatorView *myThirdImageDownloadIndicator;


@end

