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
	{ 0x85bd1608, "__request_region" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9c8cf3a7, "usb_add_hcd" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x77358855, "iomem_resource" },
	{ 0xc2a01d7e, "usb_remove_hcd" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0xa3e81544, "usb_create_hcd" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x9286c9fc, "usb_del_gadget_udc" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0x553e7cde, "devm_ioremap_resource" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9a608ef0, "usb_hcd_giveback_urb" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x66ab57c9, "usb_hub_clear_tt_buffer" },
	{ 0xdf1dd53b, "usb_gadget_set_state" },
	{ 0x92418c3f, "usb_put_hcd" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x55d40be2, "usb_hcd_link_urb_to_ep" },
	{ 0xde843921, "usb_gadget_udc_reset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xbc9b8588, "ehci_cf_port_reset_rwsem" },
	{ 0xa07c2c57, "kmem_cache_free" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xce807a25, "up_write" },
	{ 0x2677f884, "device_wakeup_enable" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0xbc5d28ab, "usb_hcd_check_unlink_urb" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x861d3e50, "kmem_cache_alloc" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x12a38747, "usleep_range" },
	{ 0xaf01bb80, "usb_add_gadget_udc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4a2315f5, "usb_ep_set_maxpacket_limit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf12f47be, "kmem_cache_create" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0xd363d3b8, "usb_hcd_unlink_urb_from_ep" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "udc-core");

MODULE_ALIAS("pci:v000010B5d00005406sv000010B5sd00009054bc06sc80i00*");

MODULE_INFO(srcversion, "E48DCE0085D09EAA6F9EB95");
