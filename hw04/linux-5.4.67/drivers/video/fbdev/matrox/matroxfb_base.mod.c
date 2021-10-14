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
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0x53b954a2, "up_read" },
	{ 0xb2609ef0, "matroxfb_g450_connect" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x77358855, "iomem_resource" },
	{ 0x5b641283, "arch_phys_wc_add" },
	{ 0xcdc90c64, "matroxfb_var2my" },
	{ 0x7cc56955, "matroxfb_g450_shutdown" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x63c849b1, "matroxfb_read_pins" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x668b19a1, "down_read" },
	{ 0x77179d2e, "param_ops_string" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x91dbf41c, "matrox_mystique" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0x12cbb16d, "register_framebuffer" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x3145216f, "pci_dev_present" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xf7bd4c2, "matrox_millennium" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x53fa6a96, "fb_set_var" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xff4c1b5e, "matrox_cfbX_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x7790ce0a, "matrox_G100" },
	{ 0xedc03953, "iounmap" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x50d68377, "arch_phys_wc_del" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x2620a062, "unregister_framebuffer" },
};

MODULE_INFO(depends, "matroxfb_g450,matroxfb_misc,matroxfb_DAC1064,matroxfb_Ti3026,matroxfb_accel");

MODULE_ALIAS("pci:v0000102Bd00000519sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000102Bd0000051Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000102Bd0000051Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000102Bd0000051Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000102Bd00001000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000102Bd00001001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000102Bd00000520sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000102Bd00000521sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000102Bd00000525sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000102Bd00002527sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2E23756CA2EBA0D2D361566");
