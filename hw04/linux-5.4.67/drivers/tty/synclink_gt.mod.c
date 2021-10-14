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
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x69350e79, "hdlc_start_xmit" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x56d2f393, "tty_register_driver" },
	{ 0xed4edc3c, "tty_set_operations" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xe29776d6, "__tty_alloc_driver" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x401f27f0, "tty_port_register_device" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x85bd1608, "__request_region" },
	{ 0x731e3a67, "alloc_hdlcdev" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa739ddd3, "tty_port_init" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x9a5ae1ec, "tty_hangup" },
	{ 0x4d8323d2, "do_SAK" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x69acdf38, "memcpy" },
	{ 0x39b82a06, "tty_flip_buffer_push" },
	{ 0x7491954, "__tty_insert_flip_char" },
	{ 0x9019339f, "tty_port_raise_dtr_rts" },
	{ 0xb1ee1b0, "tty_lock" },
	{ 0xf0c6f78, "tty_unlock" },
	{ 0x7b759f21, "tty_port_carrier_raised" },
	{ 0x9e351c2a, "tty_hung_up_p" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x4f7f5c74, "tty_port_destroy" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xebfcae36, "unregister_hdlc_device" },
	{ 0x435a1e34, "put_tty_driver" },
	{ 0x59907fdd, "tty_unregister_driver" },
	{ 0x6985da16, "tty_unregister_device" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0x47fe41f7, "hdlc_open" },
	{ 0x47a8c8a0, "try_module_get" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x26d6836d, "tty_port_close_end" },
	{ 0x925f403c, "tty_ldisc_flush" },
	{ 0xef6f5e7c, "tty_port_close_start" },
	{ 0xf720a60b, "module_put" },
	{ 0xd8d41f08, "hdlc_close" },
	{ 0x37a0cba, "kfree" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc8740c5d, "tty_ldisc_deref" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x242eb9a3, "tty_ldisc_ref" },
	{ 0x15314fce, "consume_skb" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0xc6cbbc89, "capable" },
	{ 0x1b081bbf, "hdlc_ioctl" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x1000e51, "schedule" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xba312d7b, "current_task" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xc4142837, "seq_printf" },
	{ 0x9cb39373, "seq_puts" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xedc03953, "iounmap" },
	{ 0x629027cb, "tty_wakeup" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xc5850110, "printk" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hdlc");

MODULE_ALIAS("pci:v000013C0d00000070sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013C0d000000A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013C0d00000080sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013C0d00000090sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "E6A15036A1DF7A9E486408F");
