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
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xddfad5ee, "usb_gadget_map_request" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xaf01bb80, "usb_add_gadget_udc" },
	{ 0x9166fada, "strncpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4a2315f5, "usb_ep_set_maxpacket_limit" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x754e62f4, "dma_pool_create" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x24519c40, "platform_get_resource_byname" },
	{ 0xe4413db4, "clk_get" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xa637b975, "dma_ops" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf0979a46, "usb_gadget_giveback_request" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xbcc9914b, "usb_gadget_unmap_request" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x2e1ca751, "clk_put" },
	{ 0xedc03953, "iounmap" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x9286c9fc, "usb_del_gadget_udc" },
	{ 0x37a0cba, "kfree" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe484e35f, "ioread32" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x815588a6, "clk_enable" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "udc-core");


MODULE_INFO(srcversion, "35AAC2066E853DF56A1DE1B");
