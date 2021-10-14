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
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xaf01bb80, "usb_add_gadget_udc" },
	{ 0x754e62f4, "dma_pool_create" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0x553e7cde, "devm_ioremap_resource" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf0979a46, "usb_gadget_giveback_request" },
	{ 0xbcc9914b, "usb_gadget_unmap_request" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xdf1dd53b, "usb_gadget_set_state" },
	{ 0x9286c9fc, "usb_del_gadget_udc" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x4a2315f5, "usb_ep_set_maxpacket_limit" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xddfad5ee, "usb_gadget_map_request" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x56470118, "__warn_printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0xe419bc99, "iowrite32be" },
	{ 0xfdb9b629, "ioread32be" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "udc-core");

MODULE_ALIAS("of:NGAISLER_USBDCT*");
MODULE_ALIAS("of:NGAISLER_USBDCT*C*");
MODULE_ALIAS("of:N01_021T*");
MODULE_ALIAS("of:N01_021T*C*");

MODULE_INFO(srcversion, "4352FA6EA073F2C98450A3E");
