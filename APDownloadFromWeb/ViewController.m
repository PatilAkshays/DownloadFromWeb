//
//  ViewController.m
//  APDownloadFromWeb
//
//  Created by Mac on 24/07/1938 Saka.
//  Copyright © 1938 Saka Aksh. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    [self setUp];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


-(void)setUp {
    
    self.myFirstImageDownloadIndicator.hidesWhenStopped = YES;
    
    self.mySecondImageDownloadIndicator.hidesWhenStopped = YES;
    
    self.myThirdImageDownloadIndicator.hidesWhenStopped = YES;
    
}

-(void)downloadFirstImageFromURLString: (NSString *)urlString {
    
    [self.myFirstImageDownloadIndicator startAnimating];
    
    //nsurl create
    
    NSURL *URL = [NSURL URLWithString:urlString];
    
    //session configuration create
    
    NSURLSessionConfiguration *myConfiguration = [NSURLSessionConfiguration defaultSessionConfiguration];
    
    //session alloc init
    
    NSURLSession *mySession = [NSURLSession sessionWithConfiguration:myConfiguration];
    
    //download task alloc init
    
    NSURLSessionDownloadTask *myDownloadTask = [mySession downloadTaskWithURL:URL completionHandler:^(NSURL * _Nullable location, NSURLResponse * _Nullable response, NSError * _Nullable error) {
       
        if (error) {
            
            //alert
        }
        else {
            
            if (response) {
                
                NSHTTPURLResponse *httpResponce = (NSHTTPURLResponse *) response;
                
                if (httpResponce.statusCode == 200) {
                    
                    NSData *imageData = [NSData dataWithContentsOfURL:location];
                    
                    UIImage *myImage = [UIImage imageWithData:imageData];
                    
                    [self performSelectorOnMainThread:@selector(reloadImageFirst:) withObject:myImage waitUntilDone:NO];
                }
                
                else{
                    //alert http status code
                    
                    [self.myFirstImageDownloadIndicator stopAnimating];
                }
            }
            
            else{
                //alerrt no responce
                
                [self.myFirstImageDownloadIndicator stopAnimating];

            }
        }
        
    }];
    //resume Download task
    [myDownloadTask resume];
    
}

-(void)downloadSecondImageFromURLString: (NSString *)urlString {
    
    
    [self.mySecondImageDownloadIndicator startAnimating];
    
    //nsurl create
    
    
    NSURL *URL = [NSURL URLWithString:urlString];
    
    
    //session configuration create
    
    NSURLSessionConfiguration *myConfiguration = [NSURLSessionConfiguration defaultSessionConfiguration];
    
    
    
    //session alloc init
    
    NSURLSession *mySession =[NSURLSession sessionWithConfiguration:myConfiguration];
    
    
    //download task alloc init
    
    NSURLSessionDownloadTask *myDownloadTask = [mySession downloadTaskWithURL:URL completionHandler:^(NSURL * _Nullable location, NSURLResponse * _Nullable response, NSError * _Nullable error) {
        
        if (error) {
            
           //alert
        }
        else{
            
            if (response) {
                
                NSHTTPURLResponse *httpResponce = (NSHTTPURLResponse *)response;
                
                if (httpResponce.statusCode == 200) {
                    
                    NSData *imageData = [NSData dataWithContentsOfURL:location];
                    
                    UIImage *myImage = [UIImage imageWithData:imageData];
                    
                    [self performSelectorOnMainThread:@selector(reloadImageSecond:) withObject:myImage waitUntilDone:NO];
                
                    
                }
                else{
                    
                    //alert http status code
                    
                    [self.mySecondImageDownloadIndicator stopAnimating];
                }
            }
            else{
                
                //alert no responce
                [self.mySecondImageDownloadIndicator stopAnimating];
                
            }
        }
        
        
    }];
    
    //resume Download task
    
    [myDownloadTask resume];
}
-(void)downloadThirdImageFromURLString: (NSString *)urlString {
    
    [self.myThirdImageDownloadIndicator startAnimating];
    
    //nsurl create
    
    NSURL *URL = [NSURL URLWithString:urlString];
    
    //session configuration create
    
    NSURLSessionConfiguration *myConfiguration = [NSURLSessionConfiguration defaultSessionConfiguration];
    
    //session alloc init
    
    NSURLSession *mySession = [NSURLSession sessionWithConfiguration:myConfiguration];
    
    //download task alloc init
    
    NSURLSessionDownloadTask *myDownloadTask = [mySession downloadTaskWithURL:URL completionHandler:^(NSURL * _Nullable location, NSURLResponse * _Nullable response, NSError * _Nullable error) {
        
        if (error) {
            
            //alert
        }
        else {
            
            if (response) {
                
                NSHTTPURLResponse *httpResponce = (NSHTTPURLResponse *) response;
                
                if (httpResponce.statusCode == 200) {
                    
                    NSData *imageData = [NSData dataWithContentsOfURL:location];
                    
                    UIImage *myImage = [UIImage imageWithData:imageData];
                    
                    [self performSelectorOnMainThread:@selector(reloadImageThird:) withObject:myImage waitUntilDone:NO];
                }
                
                else{
                    //alert http status code
                    
                    [self.myThirdImageDownloadIndicator stopAnimating];
                }
            }
            
            else{
                //alerrt no responce
                
                [self.myThirdImageDownloadIndicator stopAnimating];
                
            }
        }
        
    }];
    //resume Download task
    [myDownloadTask resume];
    
}

-(void)reloadImageFirst:(UIImage *)myImage{
    
    [self.myFirstImageDownloadIndicator stopAnimating];
    

    self.myFirstImageView.image = myImage;
    
    
}
-(void)reloadImageSecond:(UIImage *)myImage{
   
    [self.mySecondImageDownloadIndicator stopAnimating];

    self.mySecondImageView.image = myImage;


}

-(void)reloadImageThird:(UIImage *)myImage{

    [self.myThirdImageDownloadIndicator stopAnimating];

    
    self.myThirdImageView.image = myImage;
    
}
- (IBAction)startDowloadButton:(id)sender {
    
    [self downloadFirstImageFromURLString:kFirstImageURLString];
    
    [self downloadSecondImageFromURLString:kSecondImageURLString];
    
    [self downloadThirdImageFromURLString:kThirdImageURLString];
}
@end
