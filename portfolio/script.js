// let pathr = document.querySelectorAll('path')
    
//     document.addEventListener('scroll',fillSvgPaths)
//     fillSvgPaths()
//     function fillSvgPaths(){
//     let scrollpercentage= (document.documentElement.scrollTop+ document.body.scrollTop)/(document.documentElement.scrollHeight-document.documentElement.clientHeight);
//     // console.log(scrollpercentage)
//       for (var i=0; i<pathr.length;i++){
//           let path=pathr[i];
//           let pathlength=path.getTotalLength();
//           // console.log(pathlength);
//           path.style.strokeDasharray=pathlength;
//           path.style.strokeDashoffset=pathlength;
//           let drawlength=pathlength*scrollpercentage*5;
//           // console.log(pathlength-drawlength);
//           if (drawlength >= pathlength) {
//             drawlength = pathlength;
//           }
//           path.style.strokeDashoffset=pathlength-drawlength;
         
//       } 
//     }
// gsap.registerPlugin(ScrollTrigger);
// ScrollTrigger.create({
//   trigger: "#section-page-1",
//   start: "top top",
//   end: "+=350%",
//   pin: true
// });
// ScrollTrigger.create({
//   trigger: "#section-page-2",
//   start: "top top",
//   end: "+=200%",
//   pin: true
// });
// ScrollTrigger.create({
//   trigger: "#section-page-4",
//   start: "top top",
//   end: "+=200%",
//   pin: true
// });