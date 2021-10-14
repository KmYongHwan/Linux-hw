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
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x435a1e34, "put_tty_driver" },
	{ 0x59907fdd, "tty_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x56d2f393, "tty_register_driver" },
	{ 0xed4edc3c, "tty_set_operations" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xe29776d6, "__tty_alloc_driver" },
	{ 0x401f27f0, "tty_port_register_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0xede283d, "release_firmware" },
	{ 0x71deb539, "request_firmware" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa739ddd3, "tty_port_init" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x4d8323d2, "do_SAK" },
	{ 0x9a5ae1ec, "tty_hangup" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x6ff732c5, "tty_port_tty_hangup" },
	{ 0x29361773, "complete" },
	{ 0x586024ff, "tty_buffer_request_room" },
	{ 0x60fdf356, "tty_schedule_flip" },
	{ 0x7491954, "__tty_insert_flip_char" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc6cbbc89, "capable" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1d2c1173, "tty_port_tty_set" },
	{ 0xf26e4dd0, "tty_port_block_til_ready" },
	{ 0x9019339f, "tty_port_raise_dtr_rts" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x5d16c2c8, "tty_port_hangup" },
	{ 0x629027cb, "tty_wakeup" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0xf035ff48, "tty_port_lower_dtr_rts" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x3f9488a, "tty_port_close" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0xc4142837, "seq_printf" },
	{ 0x650b92eb, "tty_kref_put" },
	{ 0xc8740c5d, "tty_ldisc_deref" },
	{ 0x242eb9a3, "tty_ldisc_ref" },
	{ 0x7c35c47b, "tty_port_tty_get" },
	{ 0x9cb39373, "seq_puts" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x4f7f5c74, "tty_port_destroy" },
	{ 0x6985da16, "tty_unregister_device" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc5850110, "printk" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000120Ed00000100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000120Ed00000101sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000120Ed00000102sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000120Ed00000103sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000120Ed00000104sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000120Ed00000105sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000120Ed00000200sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000120Ed00000201sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "60B5682F8060EBC210DE689");
