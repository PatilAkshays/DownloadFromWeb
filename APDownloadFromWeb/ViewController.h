//
//  ViewController.h
//  APDownloadFromWeb
//
//  Created by Mac on 24/07/1938 Saka.
//  Copyright © 1938 Saka Aksh. All rights reserved.
//


#define kFirstImageURLString @"https://www.google.co.in/search?q=cartoon+image&espv=2&biw=1074&bih=633&tbm=isch&imgil=8Ms_4REHZcO67M%253A%253BQ3XOWdaG2lGA-M%253Bhttp%25253A%25252F%25252Fgraphicsheat.com%25252Fcartoon-characters%25252F&source=iu&pf=m&fir=8Ms_4REHZcO67M%253A%252CQ3XOWdaG2lGA-M%252C_&usg=__cZe0L3S2bVcH_wMmkEjs5ozPRTs%3D&ved=0ahUKEwiLoOjXmN_PAhWKK48KHSsIBEcQyjcIOA&ei=vmADWIvJO4rXvASrkJC4BA#imgrc=8Ms_4REHZcO67M%3A"


//@"https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQ0RVMQ_p08j_OLlkMaLWQ1Kg8EWMP6tmLOZ6gs5lOyju6M8aE-"



#define kSecondImageURLString @"https://www.google.co.in/search?q=famous+cartoon+image&biw=1074&bih=633&tbm=isch&imgil=Bzv9UpYiFnt7MM%253A%253BZOKUd3xaIbGsfM%253Bhttp%25253A%25252F%25252Fblog.pakistani.pk%25252Ffamous-cartoon-characters%25252F&source=iu&pf=m&fir=Bzv9UpYiFnt7MM%253A%252CZOKUd3xaIbGsfM%252C_&usg=__tJHjgt1ZVZ4lKOaE6U2eoBsn9m4%3D&ved=0ahUKEwjJgILRi9_PAhUNUI8KHclfBfIQyjcIOg&ei=D1MDWIm9A42gvQTJv5WQDw#imgrc=Bzv9UpYiFnt7MM%3A"

#define kThirdImageURLString @"https://www.google.co.in/search?q=famous+cartoon+image&biw=1074&bih=633&tbm=isch&imgil=EKmwvBCa9SJErM%253A%253BZOKUd3xaIbGsfM%253Bhttp%25253A%25252F%25252Fblog.pakistani.pk%25252Ffamous-cartoon-characters%25252F&source=iu&pf=m&fir=EKmwvBCa9SJErM%253A%252CZOKUd3xaIbGsfM%252C_&usg=__69_X1bGZgFLeO4oHeudMMK0Ydno%3D&ved=0ahUKEwjJgILRi9_PAhUNUI8KHclfBfIQyjcIOg&ei=D1MDWIm9A42gvQTJv5WQDw#imgrc=EKmwvBCa9SJErM%3A"
#import <UIKit/UIKit.h>


@interface ViewController : UIViewController

@property (strong, nonatomic) IBOutlet UIImageView *myFirstImageView;

- (IBAction)startDowloadButton:(id)sender;

@property (strong, nonatomic) IBOutlet UIActivityIndicatorView *myFirstImageDownloadIndicator;






@end

