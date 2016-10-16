//
//  ViewController.h
//  APDownloadFromWeb
//
//  Created by Mac on 24/07/1938 Saka.
//  Copyright © 1938 Saka Aksh. All rights reserved.
//


#define kFirstImageURLString @"http://images5.fanpop.com/image/photos/31500000/Doremon-doremon-31525826-454-500.jpg"



//#define kSecondImageURLString @"https://www.google.co.in/search?q=famous+cartoon+image&biw=1074&bih=633&tbm=isch&imgil=Bzv9UpYiFnt7MM%253A%253BZOKUd3xaIbGsfM%253Bhttp%25253A%25252F%25252Fblog.pakistani.pk%25252Ffamous-cartoon-characters%25252F&source=iu&pf=m&fir=Bzv9UpYiFnt7MM%253A%252CZOKUd3xaIbGsfM%252C_&usg=__tJHjgt1ZVZ4lKOaE6U2eoBsn9m4%3D&ved=0ahUKEwjJgILRi9_PAhUNUI8KHclfBfIQyjcIOg&ei=D1MDWIm9A42gvQTJv5WQDw#imgrc=Bzv9UpYiFnt7MM%3A"

//#define kThirdImageURLString @"https://www.google.co.in/search?q=famous+cartoon+image&biw=1074&bih=633&tbm=isch&imgil=EKmwvBCa9SJErM%253A%253BZOKUd3xaIbGsfM%253Bhttp%25253A%25252F%25252Fblog.pakistani.pk%25252Ffamous-cartoon-characters%25252F&source=iu&pf=m&fir=EKmwvBCa9SJErM%253A%252CZOKUd3xaIbGsfM%252C_&usg=__69_X1bGZgFLeO4oHeudMMK0Ydno%3D&ved=0ahUKEwjJgILRi9_PAhUNUI8KHclfBfIQyjcIOg&ei=D1MDWIm9A42gvQTJv5WQDw#imgrc=EKmwvBCa9SJErM%3A"
#import <UIKit/UIKit.h>


@interface ViewController : UIViewController

@property (strong, nonatomic) IBOutlet UIImageView *myFirstImageView;

- (IBAction)startDowloadButton:(id)sender;

@property (strong, nonatomic) IBOutlet UIActivityIndicatorView *myFirstImageDownloadIndicator;






@end

