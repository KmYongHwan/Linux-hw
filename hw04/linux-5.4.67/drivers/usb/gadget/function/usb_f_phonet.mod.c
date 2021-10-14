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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x71ffc019, "usb_free_all_descriptors" },
	{ 0xdcda97fb, "__put_devmap_managed_page" },
	{ 0xc41263c7, "usb_ep_disable" },
	{ 0x6bfad17f, "usb_ep_enable" },
	{ 0xffaa944, "usb_ep_queue" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0x3d7ae93d, "gether_get_ifname" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa0e62d4b, "usb_ep_alloc_request" },
	{ 0x65309948, "usb_function_unregister" },
	{ 0x11e18213, "__alloc_pages_nodemask" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0xa5152151, "phonet_header_ops" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0xc468ff97, "usb_put_function_instance" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x5bda720d, "usb_ep_autoconfig" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x3513190d, "__dev_kfree_skb_irq" },
	{ 0xc1484203, "config_group_init_type_name" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x3a1144e0, "usb_function_register" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x618911fc, "numa_node" },
	{ 0x6fe86ad9, "alloc_netdev_mqs" },
	{ 0x7ca99dbe, "config_ep_by_speed" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa36ea15e, "usb_ep_free_request" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x7bb4cda4, "skb_add_rx_frag" },
	{ 0xd3b0e023, "usb_assign_descriptors" },
	{ 0x83e9bef5, "usb_interface_id" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0x15314fce, "consume_skb" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x3fa55769, "__put_page" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "libcomposite,udc-core,u_ether,phonet");


MODULE_INFO(srcversion, "256179D6BB0C4828D0D240C");
