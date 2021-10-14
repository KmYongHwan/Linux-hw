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
	{ 0xa24f23d8, "__request_module" },
	{ 0x9f8e5a9e, "device_remove_file" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x97adb487, "utf8s_to_utf16s" },
	{ 0x349cba85, "strchr" },
	{ 0x5aa86fb3, "usb_gadget_deactivate" },
	{ 0x754d539c, "strlen" },
	{ 0xffaa944, "usb_ep_queue" },
	{ 0xabf32f29, "utf16s_to_utf8s" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x56470118, "__warn_printk" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xda49bfd, "config_item_put" },
	{ 0xbf67afe6, "config_item_init_type_name" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8fe657b9, "usb_gadget_unregister_driver" },
	{ 0xa0e62d4b, "usb_ep_alloc_request" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xdf1dd53b, "usb_gadget_set_state" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x8bddad70, "usb_gadget_clear_selfpowered" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3ab290aa, "usb_gadget_activate" },
	{ 0xc1484203, "config_group_init_type_name" },
	{ 0xeee90dc9, "init_uts_ns" },
	{ 0xe82f3544, "configfs_register_subsystem" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xf559a7e9, "device_create_file" },
	{ 0xc8ea074a, "usb_ep_dequeue" },
	{ 0xf720a60b, "module_put" },
	{ 0xbfd2e53c, "config_item_set_name" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x5400fe6f, "usb_gadget_vbus_draw" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xae596131, "usb_gadget_set_selfpowered" },
	{ 0xfffbd279, "configfs_unregister_subsystem" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa36ea15e, "usb_ep_free_request" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6ae3996b, "usb_gadget_ep_match_desc" },
	{ 0xf27c5dd8, "usb_gadget_probe_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2e562d35, "config_group_init" },
	{ 0x47a8c8a0, "try_module_get" },
};

MODULE_INFO(depends, "udc-core");


MODULE_INFO(srcversion, "2B0A4175BE1FCFC00DDFBFA");
