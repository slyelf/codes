function comSlider638031() { 
var self = this; 
var g_HostRoot = "";
var jssor_slider638031 = null;
			
							this.jssor_slider638031_starter = function (containerId) { 
							
            var _SlideshowTransitions = [ 
{$Duration:1200,$Delay:20,$Cols:8,$Rows:4,$Clip:15,$During:{$Left:[0.2,0.8],$Top:[0.2,0.8]},$FlyDirection:9,$Formation:$JssorSlideshowFormations$.$FormationZigZag,$Assembly:260,$Easing:{$Left:$JssorEasing$.$EaseInJump,$Top:$JssorEasing$.$EaseInJump},$ScaleHorizontal:0.3,$ScaleVertical:0.3,$Outside:true,$Round:{$Left:0.8,$Top:0.8}}
,{$Duration:1000,$Delay:30,$Cols:8,$Rows:4,$Clip:15,$SlideOut:true,$Formation:$JssorSlideshowFormations$.$FormationStraightStairs,$Assembly:2049,$Easing:$JssorEasing$.$EaseOutQuad}
,{$Duration:1500,$During:{$Left:[0.6,0.4]},$FlyDirection:1,$Easing:{$Left:$JssorEasing$.$EaseInQuad,$Opacity:$JssorEasing$.$EaseLinear},$ScaleHorizontal:0.3,$Opacity:2,$Outside:true,$Brother:{$Duration:1000,$FlyDirection:2,$Easing:{$Left:$JssorEasing$.$EaseInQuad,$Opacity:$JssorEasing$.$EaseLinear},$ScaleHorizontal:0.3,$Opacity:2}}
,{$Duration:1000,$Zoom:11,$SlideOut:true,$Easing:{$Zoom:$JssorEasing$.$EaseInExpo,$Opacity:$JssorEasing$.$EaseLinear},$Opacity:2}
,{$Duration:1200,$Cols:2,$Rows:2,$During:{$Left:[0.3,0.7],$Top:[0.3,0.7]},$FlyDirection:5,$ChessMode:{$Column:3,$Row:12},$Easing:{$Left:$JssorEasing$.$EaseInCubic,$Top:$JssorEasing$.$EaseInCubic,$Opacity:$JssorEasing$.$EaseLinear},$ScaleHorizontal:0.3,$ScaleVertical:0.3,$Opacity:2}
				];								
							
					var options = {
										$AutoPlay: false,                                   //[Optional] Whether to auto play, to enable slideshow, this option must be set to true, default value is false
										$AutoPlayInterval: 5000,
										$PlayOrientation: 1,                                //[Optional] Orientation to play slide (for auto play, navigation), 1 horizental, 2 vertical, default value is 1
										$DragOrientation: 3,                                //[Optional] Orientation to drag slide, 0 no drag, 1 horizental, 2 vertical, 3 either, default value is 1 (Note that the $DragOrientation should be the same as $PlayOrientation when $DisplayPieces is greater than 1, or parking position is not 0)

 
									$SlideshowOptions: {                                //[Optional] Options to specify and enable slideshow or not
										$Class: $JssorSlideshowRunner$,                 //[Required] Class to create instance of slideshow
										$Transitions: _SlideshowTransitions,            //[Required] An array of slideshow transitions to play slideshow
										$TransitionsOrder: 0,                           //[Optional] The way to choose transition to play slide, 1 Sequence, 0 Random
									},										
									
					$ArrowNavigatorOptions: {
						$Class: $JssorArrowNavigator$,              //[Requried] Class to create arrow navigator instance
						$ChanceToShow: 2       //[Required] 0 Never, 1 Mouse Over, 2 Always
					},
				                $BulletNavigatorOptions: {                                //[Optional] Options to specify and enable navigator or not
						$Class: $JssorBulletNavigator$,                       //[Required] Class to create navigator instance
						$ChanceToShow: 2,                               //[Required] 0 Never, 1 Mouse Over, 2 Always
						$AutoCenter: 1,                                 //[Optional] Auto center navigator in parent container, 0 None, 1 Horizontal, 2 Vertical, 3 Both, default value is 0
						$Steps: 1,                                      //[Optional] Steps to go for each navigation request, default value is 1
						$Lanes: 1,                                      //[Optional] Specify lanes to arrange items, default value is 1
						$SpacingX: 12,                                   //[Optional] Horizontal space between each item in pixel, default value is 0
						$SpacingY: 12,                                   //[Optional] Vertical space between each item in pixel, default value is 0
						$Orientation: 1                                 //[Optional] The orientation of the navigator, 1 horizontal, 2 vertical, default value is 1
					}						
									};

									self.jssor_slider638031 = new $JssorSlider$(containerId, options);
								}; 
							
									//responsive code begin
									//you can remove responsive code if you do not want the slider scales while window resizes
									this.ScaleSlider = function() {
										var parentWidth = self.jssor_slider638031.$Elmt.parentNode.clientWidth;
										if (parentWidth)
										{
											self.jssor_slider638031.$SetScaleWidth(Math.min(parentWidth, 455));
										}
										else
											$JssorUtils$.$Delay(self.ScaleSlider, 30);
									};
				
					this.scriptLoaded = function()
					{
				   jqCS638031 = jQuery638031.noConflict(false);jqCS638031("#comslider_in_point_638031").html('<div id="comSContainer638031_" name="comSContainer638031_" style="display: inline-block; text-align: left;  border:0px; width:455px; height:256px; position: relative; top: 0px; left: 0px;"><div u="slides" style="position: absolute; left: 0px; top: 0px; width:455px; height:256px; overflow: hidden;"><div><img u="image" src="comslider638031/img/1505060419418151.jpg"></img></div><div><img u="image" src="comslider638031/img/1505060419418152.jpg"></img></div><div><img u="image" src="comslider638031/img/1505060420514401.jpg"></img></div><div><img u="image" src="comslider638031/img/1505060421063311.jpg"></img></div><div><img u="image" src="comslider638031/img/1505060422168581.jpg"></img></div></div><!-- Bullet Navigator Skin Begin --><!-- jssor slider bullet navigator skin 01 --><style>	/*	.	 div           (normal)	.jssorb638031 div:hover     (normal mouseover)	.jssorb638031 .av           (active)	.jssorb638031 .av:hover     (active mouseover)	.jssorb638031 .dn           (mousedown)	*/	.jssorb638031 div, .jssorb638031 div:hover, .jssorb638031 .av {		filter: alpha(opacity=90);		opacity: 0.9;		overflow: hidden;		cursor: pointer;	border-radius: 24px;  border: 2px solid #DDDDDD;	background-color: transparent;		margin: 1px !important;	}	.jssorb638031 div {		margin: 1px !important;		background-repeat:no-repeat;		background-position:center; 	}		.jssorb638031 div:hover, 		.jssorb638031 .av:hover {			background-color: #FFFFFF;  border: 3px solid #FFFFFF;	background-color: transparent;		margin: 0px !important;		background-repeat:no-repeat;		background-position:center; 		}	.jssorb638031 .av {		background-color: #FFFFFF;  border: 3px solid #FFFFFF;	background-color: transparent;		margin: 0px !important;		background-repeat:no-repeat;		background-position:center; 	}</style><!-- bullet navigator container -->         <div u="navigator" class="jssorb638031" style="position: absolute; bottom: 17px; left: 12px;">        	<!-- bullet navigator item prototype -->        	<div u="prototype" style="POSITION: absolute; WIDTH: 12px; HEIGHT: 12px;"></div>        </div>				 <!-- Bullet Navigator Skin End -->	<!-- Arrow Navigator Skin Begin --><style>/* jssor slider arrow navigator skin 02 css *//*.jssora638031l              (normal).jssora638031r              (normal).jssora638031l:hover        (normal mouseover).jssora638031r:hover        (normal mouseover).jssora638031ldn            (mousedown).jssora638031rdn            (mousedown)*/.jssora638031l, .jssora638031r, .jssora638031ldn, .jssora638031rdn{	position: absolute;	cursor: pointer;	display: block;    overflow:hidden;}.jssora638031l {background: transparent url("comslider638031/imgnavctl/defback.png?1430878939") no-repeat; }.jssora638031r {background: transparent url("comslider638031/imgnavctl/defforward.png?1430878939") no-repeat; }.jssora638031l:hover, .jssora638031ldn {background: transparent url("comslider638031/imgnavctl/defbackhover.png?1430878939") no-repeat; }.jssora638031r:hover, .jssora638031rdn {background: transparent url("comslider638031/imgnavctl/defforwardhover.png?1430878939") no-repeat; } </style><!-- Arrow Left --><span u="arrowleft" class="jssora638031l" style="margin-left:10px; width: 42px; height: 42px; top: 107px; left: 0px;"></span><!-- Arrow Right --><span u="arrowright" class="jssora638031r" style="margin-left:-10px; width: 42px; height: 42px; top: 107px; left: 413px"></span><!-- Arrow Navigator Skin End -->	</div>');
                    jqCS638031("#comslider_in_point_638031 a").bind('click',  function() { if ((this.name.length > 0) && (isNaN(this.name) == false)) {  self.switchToFrame(parseInt(this.name)); return false;} });
                
					self.jssor_slider638031_starter("comSContainer638031_");
							
						self.ScaleSlider();
						$JssorUtils$.$AddEvent(window, "load", self.ScaleSlider);
						if (!navigator.userAgent.match(/(iPhone|iPod|iPad|BlackBerry|IEMobile)/)) {
							$JssorUtils$.$OnWindowResize(window, self.ScaleSlider);
						}
					
}
var g_CSIncludes = new Array();
var g_CSLoading = false;
var g_CSCurrIdx = 0; 
 this.include = function(src, last) 
                {
                    if (src != '')
                    {				
                            var tmpInclude = Array();
                            tmpInclude[0] = src;
                            tmpInclude[1] = last;					
                            //
                            g_CSIncludes[g_CSIncludes.length] = tmpInclude;
                    }            
                    if ((g_CSLoading == false) && (g_CSCurrIdx < g_CSIncludes.length))
                    {


                            var oScript = null;
                            if (g_CSIncludes[g_CSCurrIdx][0].split('.').pop() == 'css')
                            {
                                oScript = document.createElement('link');
                                oScript.href = g_CSIncludes[g_CSCurrIdx][0];
                                oScript.type = 'text/css';
                                oScript.rel = 'stylesheet';

                                oScript.onloadDone = true; 
                                g_CSLoading = false;
                                g_CSCurrIdx++;								
                                if (g_CSIncludes[g_CSCurrIdx-1][1] == true) 
                                        self.scriptLoaded(); 
                                else
                                        self.include('', false);
                            }
                            else
                            {
                                oScript = document.createElement('script');
                                oScript.src = g_CSIncludes[g_CSCurrIdx][0];
                                oScript.type = 'text/javascript';

                                //oScript.onload = scriptLoaded;
                                oScript.onload = function() 
                                { 
                                        if ( ! oScript.onloadDone ) 
                                        {
                                                oScript.onloadDone = true; 
                                                g_CSLoading = false;
                                                g_CSCurrIdx++;								
                                                if (g_CSIncludes[g_CSCurrIdx-1][1] == true) 
                                                        self.scriptLoaded(); 
                                                else
                                                        self.include('', false);
                                        }
                                };
                                oScript.onreadystatechange = function() 
                                { 
                                        if ( ( "loaded" === oScript.readyState || "complete" === oScript.readyState ) && ! oScript.onloadDone ) 
                                        {
                                                oScript.onloadDone = true;
                                                g_CSLoading = false;	
                                                g_CSCurrIdx++;
                                                if (g_CSIncludes[g_CSCurrIdx-1][1] == true) 
                                                        self.scriptLoaded(); 
                                                else
                                                        self.include('', false);
                                        }
                                }
                                
                            }
                            //
                            document.getElementsByTagName("head").item(0).appendChild(oScript);
                            //
                            g_CSLoading = true;
                    }

                }
                

}
objcomSlider638031 = new comSlider638031();
objcomSlider638031.include('comslider638031/js/helpers.js', false);
objcomSlider638031.include('comslider638031/js/jquery-1.10.1.js', false);
objcomSlider638031.include('comslider638031/js/jquery-ui-1.10.3.effects.js', false);
objcomSlider638031.include('comslider638031/js/jssor.core.js', false);
objcomSlider638031.include('comslider638031/js/jssor.utils.js', false);
objcomSlider638031.include('comslider638031/js/jssor.slider.js', true);
