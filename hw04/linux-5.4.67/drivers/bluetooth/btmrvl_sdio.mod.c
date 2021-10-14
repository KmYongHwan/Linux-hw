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
	{ 0xec6dbfd3, "sdio_unregister_driver" },
	{ 0xfe8830e8, "sdio_register_driver" },
	{ 0x95970f03, "btmrvl_register_hdev" },
	{ 0xe07497b7, "btmrvl_add_card" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xede283d, "release_firmware" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x71deb539, "request_firmware" },
	{ 0x7d477f96, "sdio_set_block_size" },
	{ 0x1535a4f3, "sdio_claim_irq" },
	{ 0xc8bcbbf3, "sdio_enable_func" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x90f771ce, "sdio_writesb" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xae52f85c, "btmrvl_check_evtpkt" },
	{ 0xfbd10329, "hci_recv_frame" },
	{ 0xd17983e2, "btmrvl_process_event" },
	{ 0xb18156be, "skb_pull" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x6ffc9925, "btmrvl_send_module_cfg_cmd" },
	{ 0x8c63d75a, "btmrvl_remove_card" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x81cb549e, "btmrvl_interrupt" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2d1ff8e1, "sdio_readsb" },
	{ 0xf9a482f9, "msleep" },
	{ 0x474623ba, "sdio_disable_func" },
	{ 0x7c3c7d83, "sdio_release_irq" },
	{ 0x3ca22690, "sdio_set_host_pm_flags" },
	{ 0x6f83d725, "btmrvl_enable_hs" },
	{ 0x44b4a24, "hci_suspend_dev" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x957e7ecf, "hci_resume_dev" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1e8b2d0e, "sdio_get_host_pm_caps" },
	{ 0xaf314690, "dev_coredumpv" },
	{ 0x69acdf38, "memcpy" },
	{ 0x754d539c, "strlen" },
	{ 0xe914e41e, "strcpy" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x999e8297, "vfree" },
	{ 0x12a38747, "usleep_range" },
	{ 0x718b8b7, "bt_info" },
	{ 0xb2dcc92a, "sdio_readb" },
	{ 0xf2869358, "sdio_f0_readb" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xb3dcfb60, "sdio_release_host" },
	{ 0x3528921c, "sdio_writeb" },
	{ 0x75faced3, "sdio_claim_host" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "btmrvl,bluetooth");

MODULE_ALIAS("sdio:c*v02DFd9105*");
MODULE_ALIAS("sdio:c*v02DFd911A*");
MODULE_ALIAS("sdio:c*v02DFd911B*");
MODULE_ALIAS("sdio:c*v02DFd912A*");
MODULE_ALIAS("sdio:c*v02DFd9136*");
MODULE_ALIAS("sdio:c*v02DFd912E*");
MODULE_ALIAS("sdio:c*v02DFd9146*");
MODULE_ALIAS("sdio:c*v02DFd914A*");
MODULE_ALIAS("sdio:c*v02DFd9142*");

MODULE_INFO(srcversion, "65A0DDC0CEEF578B8FA3D9C");
