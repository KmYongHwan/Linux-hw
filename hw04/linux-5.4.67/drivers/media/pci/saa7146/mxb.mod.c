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
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x565bd19e, "saa7146_unregister_extension" },
	{ 0x6c405a96, "saa7146_register_extension" },
	{ 0x22cdca8c, "saa7146_unregister_device" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x39932179, "i2c_del_adapter" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x6e9eea20, "saa7146_set_hps_source_and_sync" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0xc5850110, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x9e23a616, "saa7146_register_device" },
	{ 0xb3d574c3, "v4l2_ctrl_handler_setup" },
	{ 0xb7adae2a, "v4l2_i2c_new_subdev" },
	{ 0xb7146edb, "i2c_add_adapter" },
	{ 0xf42938bc, "saa7146_i2c_adapter_prepare" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x4ecedfe7, "saa7146_vv_release" },
	{ 0xf993f06, "v4l2_ctrl_new_std" },
	{ 0x9216a4e8, "saa7146_vv_init" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdd64e639, "strscpy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc2fbd82a, "v4l2_subdev_call_wrappers" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "saa7146,saa7146_vv,videodev");

MODULE_ALIAS("pci:v00001131d00007146sv00000000sd00000000bc*sc*i*");

MODULE_INFO(srcversion, "4866B7D5A283091CF9AF798");
