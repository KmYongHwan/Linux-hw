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
	{ 0x3528921c, "sdio_writeb" },
	{ 0xb2dcc92a, "sdio_readb" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x458a230b, "mwifiex_cancel_hs" },
	{ 0x90f771ce, "sdio_writesb" },
	{ 0xc8bcbbf3, "sdio_enable_func" },
	{ 0x1535a4f3, "sdio_claim_irq" },
	{ 0xf4608acd, "mmc_hw_reset" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x8d281aca, "mwifiex_disable_auto_ds" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2bae67e2, "mwifiex_process_sleep_confirm_resp" },
	{ 0x999e8297, "vfree" },
	{ 0xcc9f05b1, "mwifiex_main_process" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x64eee032, "mwifiex_prepare_fw_dump_info" },
	{ 0x1e8b2d0e, "sdio_get_host_pm_caps" },
	{ 0x25b3797e, "skb_trim" },
	{ 0xfd94814e, "complete_all" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x5ef6588d, "_mwifiex_dbg" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x46c4bed2, "mwifiex_add_card" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x872569ef, "mwifiex_shutdown_sw" },
	{ 0xb18156be, "skb_pull" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xd4dad9f3, "mwifiex_alloc_dma_align_buf" },
	{ 0x2d1ff8e1, "sdio_readsb" },
	{ 0xec6dbfd3, "sdio_unregister_driver" },
	{ 0x3ca22690, "sdio_set_host_pm_flags" },
	{ 0xb7bd051a, "mwifiex_dnld_fw" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x12a38747, "usleep_range" },
	{ 0x7c3c7d83, "sdio_release_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf2869358, "sdio_f0_readb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x402acacc, "mwifiex_reinit_sw" },
	{ 0xa482a445, "mwifiex_handle_rx_packet" },
	{ 0x46036840, "mwifiex_deauthenticate_all" },
	{ 0xeafa3d1d, "mwifiex_remove_card" },
	{ 0x5cd3d48c, "mwifiex_enable_hs" },
	{ 0x74181c3a, "mwifiex_upload_device_dump" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb0e602eb, "memmove" },
	{ 0xfe8830e8, "sdio_register_driver" },
	{ 0x75faced3, "sdio_claim_host" },
	{ 0x29315ef, "mwifiex_drv_info_dump" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x63ca9a35, "mwifiex_init_shutdown_fw" },
	{ 0x7d477f96, "sdio_set_block_size" },
	{ 0x474623ba, "sdio_disable_func" },
	{ 0xb3dcfb60, "sdio_release_host" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "mwifiex");

MODULE_ALIAS("sdio:c*v02DFd9116*");
MODULE_ALIAS("sdio:c*v02DFd9119*");
MODULE_ALIAS("sdio:c*v02DFd9129*");
MODULE_ALIAS("sdio:c*v02DFd912D*");
MODULE_ALIAS("sdio:c*v02DFd9135*");
MODULE_ALIAS("sdio:c*v02DFd9139*");
MODULE_ALIAS("sdio:c*v02DFd9145*");
MODULE_ALIAS("sdio:c*v02DFd9149*");
MODULE_ALIAS("sdio:c*v02DFd9141*");

MODULE_INFO(srcversion, "B55C4FD53FF63BACE471595");
