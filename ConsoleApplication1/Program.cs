using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using ATLProject2Lib;

namespace ConsoleApplication1
{
    class Program
    {
        static void Main(string[] args)
        {
            
            ImyCom2 t =  new myCom2Class();
            var a = t.getValue21();

            var aa = t.getValue9_2();

            ImyCom3 t3 = new myCom3Class();
            var a1 = t3.getValues3_1();

            ImyCom4 t4 = new myCom4Class();
            var a4 = t4.getValue2();


            //            ATL _ это шаблоны для COM

            //скачал и запустил проект с https://www.codeproject.com/Articles/38254/Writing-Simple-COM-ATL-DLL-Using-it-with-dotnet
            //Сам делал руками в упрощенном виде на основе https://www.codeproject.com/Articles/38254/Writing-Simple-COM-ATL-DLL-Using-it-with-dotnet



            //нужно было
            //в C++(ATL)проекте в свойствах, в linker убрать rpcndr.dll(он на него ругался) - а оказалось, что этого файла уже нет, он устарел

            //при сборке C++ он регистрируется regsvr32.exe - нужно студию под админом запускать (!!!!не перепутать буквы regsvr, а не regsrv)

            //из c# проекта делал ссылку на отдельно скомпилированный dll. - ругался при старте, что COM не может родить объект - нужно было скомпилить именно про x86 - заработало

            //--начинаю моделировать сам.

            //Сделал ATL проект, x86, компилится, вроде, даже регается. Вижу его в регедит

            //Добавил класс. -пришлось дописать
            //#define IDR_MYCOM 102 по аналогии с работающим проектом. Не дает зарегать, говорит прав мало. Не регается.

            //Поставил в Свойствах проекта - Linker - General - RegisterOutput = NO.Все ок(посмотрим, что будет дальше)
            //странно, работало в принципе и при  RegisterOutput = YES на собственном проекте

            //Добавляем метод через ClassView -на классе - add function !!!!НЕТ
            //именно на Интерфейсе через ClassView и будет add method(не function) - и надо выбирвать не Long, а Long * -тогда можно делать out retval галки
            //и именно для интерфейса, где внутри папка BaseTypes (т.к. их 2 там этих интерфейса, и для другого = не будет пробрасываться метод наружу)

            //-и типа оно красиво все обертывает в idl файле. ХЗ

            //Чтобы оно работало под Framework> 3.5 нужно для reference на этот ATL поставить Embed Interop Types = false

            //Мой собственный проект - работает.ATLProject2


            //хмм, вроде оно и под anyCPU билдится.

            //в проекте - ссылка только на COM (без каких-либо путей к файлу)
            //     < COMReference Include = "ATLProject2Lib" >
            //          < Guid >{ BD93880E - 6EFD - 4C43 - 854D - 2D3FE0EE0DB5}</ Guid >


            //в regedit каждый класс компонента и интерфейс прописаны с включением ссылки на базовый { BD93880E - 6EFD - 4C43 - 854D - 2D3FE0EE0DB5}





        }
    }
}
