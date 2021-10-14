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
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x7bb4cda4, "skb_add_rx_frag" },
	{ 0x15314fce, "consume_skb" },
	{ 0x334097dc, "usb_alloc_urb" },
	{ 0xdcda97fb, "__put_devmap_managed_page" },
	{ 0x3fa55769, "__put_page" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x11e18213, "__alloc_pages_nodemask" },
	{ 0x618911fc, "numa_node" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x6ca935a7, "usb_set_interface" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xeee83d72, "usb_driver_claim_interface" },
	{ 0x6fe86ad9, "alloc_netdev_mqs" },
	{ 0x53801be1, "usb_ifnum_to_if" },
	{ 0x15939d21, "cdc_parse_cdc_header" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0xce42315c, "usb_driver_release_interface" },
	{ 0xa5152151, "phonet_header_ops" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "phonet");

MODULE_ALIAS("usb:v0421p*d*dc*dsc*dp*ic02iscFEip*in*");

MODULE_INFO(srcversion, "EDD83D25372236BA991730B");
