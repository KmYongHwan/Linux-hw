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
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x12cbb16d, "register_framebuffer" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0xe3877899, "fb_find_mode" },
	{ 0xa4191c0b, "memset_io" },
	{ 0x5b641283, "arch_phys_wc_add" },
	{ 0x37a0cba, "kfree" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0xdffc80fc, "vesa_modes" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x85bd1608, "__request_region" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x75571bf5, "framebuffer_alloc" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xb03729ed, "framebuffer_release" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0xc07b0863, "fb_destroy_modedb" },
	{ 0x2620a062, "unregister_framebuffer" },
	{ 0xe7a2620e, "save_vga" },
	{ 0x686de290, "restore_vga" },
	{ 0x68195e7e, "cfb_fillrect" },
	{ 0x96b48f1b, "cfb_copyarea" },
	{ 0xe990fee, "cfb_imageblit" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0xc5850110, "printk" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0x50d68377, "arch_phys_wc_del" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "vgastate");

MODULE_ALIAS("pci:v000010C8d00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010C8d00000002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010C8d00000003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010C8d00000083sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010C8d00000004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010C8d00000005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010C8d00000025sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010C8d00000006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010C8d00000016sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "240D54B3BEB63ADD6A2EC8A");
