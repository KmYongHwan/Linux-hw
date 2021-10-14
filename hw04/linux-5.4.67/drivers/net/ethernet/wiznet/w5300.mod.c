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
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xdbdb0e8b, "request_any_context_irq" },
	{ 0x997f9924, "gpiod_to_irq" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0x553e7cde, "devm_ioremap_resource" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x349cba85, "strchr" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x6ab9090f, "netif_napi_add" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0xc5534d64, "ioread16" },
	{ 0x6a641f96, "__napi_schedule" },
	{ 0xe3611c52, "napi_schedule_prep" },
	{ 0xf3744f5f, "netdev_info" },
	{ 0xddce8d3c, "napi_disable" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0x15314fce, "consume_skb" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x5792f848, "strlcpy" },
	{ 0x3f9d1335, "napi_complete_done" },
	{ 0x7b092212, "netif_receive_skb" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xbb61b5d4, "netif_device_detach" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0xe8ca8933, "gpiod_get_raw_value" },
	{ 0x91226d06, "gpio_to_desc" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0xf29affd6, "netif_device_attach" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FB82AB0D85916B1FC3757D0");
