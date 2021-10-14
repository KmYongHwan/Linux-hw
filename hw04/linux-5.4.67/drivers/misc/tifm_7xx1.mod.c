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
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xfd94814e, "complete_all" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x83381709, "tifm_add_adapter" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x4d87e644, "pci_ioremap_bar" },
	{ 0x9540bbb5, "tifm_alloc_adapter" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x1aa8d2a8, "device_unregister" },
	{ 0xc5850110, "printk" },
	{ 0x785dd9f2, "device_register" },
	{ 0xe069f542, "tifm_alloc_device" },
	{ 0x5434a39b, "tifm_free_device" },
	{ 0x128b4ba6, "tifm_free_adapter" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xc3e0dc78, "pci_intx" },
	{ 0xedc03953, "iounmap" },
	{ 0xd89bf291, "tifm_remove_adapter" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x8c46224, "pci_enable_wake" },
	{ 0x136b2332, "pci_choose_state" },
	{ 0x896845d2, "pci_save_state" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xffb277f, "tifm_queue_work" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "tifm_core");

MODULE_ALIAS("pci:v0000104Cd00008033sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Cd0000803Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Cd0000AC8Fsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "4C4C8AB9E7B18130DD29FF8");
