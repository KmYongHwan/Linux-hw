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
	{ 0x85bd1608, "__request_region" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x77358855, "iomem_resource" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x68195e7e, "cfb_fillrect" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xfb578fc5, "memset" },
	{ 0xe990fee, "cfb_imageblit" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x12cbb16d, "register_framebuffer" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xe3877899, "fb_find_mode" },
	{ 0xb665f56d, "__cachemode2pte_tbl" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x52afa80a, "set_pages_wb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x53fa6a96, "fb_set_var" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xd5786321, "set_pages_uc" },
	{ 0xd34c971d, "pci_get_device" },
	{ 0xfed11957, "vm_iomap_memory" },
	{ 0x96b48f1b, "cfb_copyarea" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xe484e35f, "ioread32" },
	{ 0x2620a062, "unregister_framebuffer" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F1206D2BEEBF6087869DEBC");
