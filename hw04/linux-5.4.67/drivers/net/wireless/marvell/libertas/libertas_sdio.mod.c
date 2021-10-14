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
	{ 0x2d3385d3, "system_wq" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x931d3975, "__pm_runtime_idle" },
	{ 0x170a8989, "lbs_resume" },
	{ 0x90f771ce, "sdio_writesb" },
	{ 0xc8bcbbf3, "sdio_enable_func" },
	{ 0x1535a4f3, "sdio_claim_irq" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3cb93f27, "lbs_stop_card" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0x95451c3, "netdev_alert" },
	{ 0xcde786a3, "__lbs_cmd" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1e8b2d0e, "sdio_get_host_pm_caps" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x8572594c, "lbs_start_card" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x24f4d5ff, "lbs_queue_event" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x40737074, "lbs_get_firmware_async" },
	{ 0xe1dd8e27, "lbs_cmd_copyback" },
	{ 0x8e7dcfa0, "lbs_suspend" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2d1ff8e1, "sdio_readsb" },
	{ 0xec6dbfd3, "sdio_unregister_driver" },
	{ 0xe28d1625, "lbs_remove_card" },
	{ 0x892d752a, "sdio_f0_writeb" },
	{ 0x3ca22690, "sdio_set_host_pm_flags" },
	{ 0xb27c7cec, "lbs_process_rxed_packet" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x7c3c7d83, "sdio_release_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x33c2dd7d, "lbs_host_to_card_done" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xc06825ae, "sdio_align_size" },
	{ 0xef991bdd, "lbs_add_card" },
	{ 0xf2869358, "sdio_f0_readb" },
	{ 0x88b896fa, "mmc_add_host" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xd14fbbf, "mmc_remove_host" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xfe8830e8, "sdio_register_driver" },
	{ 0x75faced3, "sdio_claim_host" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x7d477f96, "sdio_set_block_size" },
	{ 0x474623ba, "sdio_disable_func" },
	{ 0xb3dcfb60, "sdio_release_host" },
	{ 0x9f95e9a4, "lbs_notify_command_response" },
};

MODULE_INFO(depends, "libertas");

MODULE_ALIAS("sdio:c*v02DFd9103*");
MODULE_ALIAS("sdio:c*v02DFd9104*");

MODULE_INFO(srcversion, "574DD96A90F004DBC84B465");
