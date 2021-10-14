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
	{ 0x1fd1d2a5, "kmem_cache_destroy" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf44a972b, "driver_register" },
	{ 0xe6bbb7f8, "fw_send_request" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0x17fc86f3, "skb_clone" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x68b6685d, "fw_bus_type" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x1d39a3c5, "_dev_notice" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1e9102db, "fw_iso_context_start" },
	{ 0xd81df618, "fw_iso_context_queue_flush" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x7cc4a5d, "printk_timed_ratelimit" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x3a771e39, "fw_core_add_descriptor" },
	{ 0xe6689185, "ethtool_op_get_link" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0xa07c2c57, "kmem_cache_free" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4b0f2817, "fw_iso_buffer_destroy" },
	{ 0xb18156be, "skb_pull" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xdbb8a7c7, "fw_iso_context_queue" },
	{ 0x861d3e50, "kmem_cache_alloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x6fe86ad9, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7c08cd59, "fw_core_add_address_handler" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf12f47be, "kmem_cache_create" },
	{ 0xf3c267e, "fw_iso_context_stop" },
	{ 0xc0f21b2, "fw_core_remove_address_handler" },
	{ 0x37a0cba, "kfree" },
	{ 0x89792eb7, "fw_iso_context_create" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0x15314fce, "consume_skb" },
	{ 0xbbdd0efc, "fw_iso_buffer_init" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xaedf84ce, "fw_high_memory_region" },
	{ 0x6273ae20, "fw_iso_context_destroy" },
	{ 0x4b4db3a8, "fw_send_response" },
	{ 0xbc6094c, "fw_core_remove_descriptor" },
};

MODULE_INFO(depends, "firewire-core");

MODULE_ALIAS("ieee1394:ven*mo*sp0000005Ever00000001*");
MODULE_ALIAS("ieee1394:ven*mo*sp0000005Ever00000002*");

MODULE_INFO(srcversion, "84E6DF182A9AEA0C2E057E8");
