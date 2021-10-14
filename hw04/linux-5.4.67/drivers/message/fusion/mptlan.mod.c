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
	{ 0x981efe92, "mpt_deregister" },
	{ 0x610b257e, "mpt_reset_deregister" },
	{ 0x74a0134a, "mpt_device_driver_deregister" },
	{ 0x4bb99c7f, "mpt_device_driver_register" },
	{ 0x91fff5bf, "mpt_reset_register" },
	{ 0x3052f851, "mpt_register" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0x135f9e2b, "dma_direct_sync_single_for_device" },
	{ 0x68c544c7, "dma_direct_sync_single_for_cpu" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x3513190d, "__dev_kfree_skb_irq" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0xe6c1e126, "mpt_event_deregister" },
	{ 0xc8e2a60e, "mpt_event_register" },
	{ 0x37a0cba, "kfree" },
	{ 0xbf855d72, "mpt_free_msg_frame" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x15314fce, "consume_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0xa637b975, "dma_ops" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xb18156be, "skb_pull" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xa7618f79, "alloc_fcdev" },
	{ 0xc5850110, "printk" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4893214e, "mpt_put_msg_frame" },
	{ 0x13383b3b, "mpt_get_msg_frame" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mptbase");


MODULE_INFO(srcversion, "48A454EAB80C0F2D811C2DA");
