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
	{ 0x7a43b97e, "usb_gstrings_attach" },
	{ 0x71ffc019, "usb_free_all_descriptors" },
	{ 0xc41263c7, "usb_ep_disable" },
	{ 0x6bfad17f, "usb_ep_enable" },
	{ 0x1819c7a1, "gether_get_qmult" },
	{ 0xffaa944, "usb_ep_queue" },
	{ 0x39a3e5ac, "gether_setup_name_default" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0x4c74cbbf, "gether_get_host_addr_cdc" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x40f79de7, "usb_ep_set_halt" },
	{ 0x3d7ae93d, "gether_get_ifname" },
	{ 0xa0e62d4b, "usb_ep_alloc_request" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8878cfa6, "gether_cleanup" },
	{ 0x65309948, "usb_function_unregister" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x9232d829, "gether_set_host_addr" },
	{ 0x95f1ee75, "gether_get_dev_addr" },
	{ 0xe76ae805, "skb_queue_purge" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0xfb578fc5, "memset" },
	{ 0xbaf857e1, "gether_connect" },
	{ 0xc468ff97, "usb_put_function_instance" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x5bda720d, "usb_ep_autoconfig" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xce334190, "gether_set_gadget" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xc760aeae, "gether_get_host_addr" },
	{ 0xc1484203, "config_group_init_type_name" },
	{ 0x4e2890c5, "gether_set_qmult" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x3a1144e0, "usb_function_register" },
	{ 0xc8ea074a, "usb_ep_dequeue" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x55d5485b, "gether_register_netdev" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xfb7b8701, "gether_set_dev_addr" },
	{ 0x7ca99dbe, "config_ep_by_speed" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa36ea15e, "usb_ep_free_request" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xeb21aa56, "gether_disconnect" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0xd3b0e023, "usb_assign_descriptors" },
	{ 0x83e9bef5, "usb_interface_id" },
	{ 0x7c23703, "hrtimer_try_to_cancel" },
	{ 0xbb37bfdb, "usb_os_desc_prepare_interf_dir" },
	{ 0x9c160d9e, "skb_put" },
};

MODULE_INFO(depends, "libcomposite,udc-core,u_ether");


MODULE_INFO(srcversion, "CB79DDF7750DA0C8A22ABBA");
