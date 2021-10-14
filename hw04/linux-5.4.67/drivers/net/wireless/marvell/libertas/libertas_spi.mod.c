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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x170a8989, "lbs_resume" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3cb93f27, "lbs_stop_card" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x8572594c, "lbs_start_card" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0x24f4d5ff, "lbs_queue_event" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x8e7dcfa0, "lbs_suspend" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x85b7373, "spi_sync" },
	{ 0xe28d1625, "lbs_remove_card" },
	{ 0xb27c7cec, "lbs_process_rxed_packet" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x33c2dd7d, "lbs_host_to_card_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xef991bdd, "lbs_add_card" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2e88056b, "lbs_get_firmware" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x15314fce, "consume_skb" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x9f95e9a4, "lbs_notify_command_response" },
};

MODULE_INFO(depends, "libertas");


MODULE_INFO(srcversion, "C0BA2ADDCC4065F2FBB2C6E");
