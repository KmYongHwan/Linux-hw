#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x74801e4, "param_ops_ulong" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x6985da16, "tty_unregister_device" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x435a1e34, "put_tty_driver" },
	{ 0x59907fdd, "tty_unregister_driver" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xd979a547, "__x86_indirect_thunk_rdi" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x6aa619a8, "pci_match_id" },
	{ 0xd34c971d, "pci_get_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x56d2f393, "tty_register_driver" },
	{ 0xed4edc3c, "tty_set_operations" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xe29776d6, "__tty_alloc_driver" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x925f403c, "tty_ldisc_flush" },
	{ 0xef6f5e7c, "tty_port_close_start" },
	{ 0x6ff732c5, "tty_port_tty_hangup" },
	{ 0x777ae486, "tty_prepare_flip_string" },
	{ 0x39b82a06, "tty_flip_buffer_push" },
	{ 0x650b92eb, "tty_kref_put" },
	{ 0x7491954, "__tty_insert_flip_char" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x7c35c47b, "tty_port_tty_get" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x5d16c2c8, "tty_port_hangup" },
	{ 0x401f27f0, "tty_port_register_device" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x4f7f5c74, "tty_port_destroy" },
	{ 0xa739ddd3, "tty_port_init" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xf26e4dd0, "tty_port_block_til_ready" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x1d2c1173, "tty_port_tty_set" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x49951708, "sev_enable_key" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x629027cb, "tty_wakeup" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0xe914e41e, "strcpy" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xc6cbbc89, "capable" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4dd981f, "tty_encode_baud_rate" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xba312d7b, "current_task" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000011FEd00000004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000805sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000802sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000007sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000008sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000009sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000803sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000903sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000801sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000000Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000000Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000000Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000000Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000000Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000000Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000080Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000080Dsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "A0BF5DE06DC0DFC5614FC8D");
