using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ToDoList1
{
    namespace ProstaListaZadan.Models
    {
        public class TaskItem
        {
            public int Id { get; set; }
            public string Nazwa { get; set; }
            public bool CzyWykonane { get; set; }
            public bool CzyUsuniete { get; set; }
            public DateTime DataUtworzenia { get; set; }
        }
    }
}
