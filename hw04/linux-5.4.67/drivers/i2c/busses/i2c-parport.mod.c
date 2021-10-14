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
	{ 0xaad49c42, "param_array_ops" },
	{ 0xf7871355, "parport_unregister_driver" },
	{ 0x69539117, "__parport_register_driver" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xc5850110, "printk" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfc46d3f9, "i2c_setup_smbus_alert" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x1faadfbe, "i2c_bit_add_bus" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x2a961d8c, "parport_claim_or_block" },
	{ 0xb0a23144, "parport_register_dev_model" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0xc65846c4, "parport_unregister_device" },
	{ 0x9eb4f9a2, "parport_release" },
	{ 0x39932179, "i2c_del_adapter" },
	{ 0x16779475, "i2c_unregister_device" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xb0baa56e, "i2c_handle_smbus_alert" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "parport,i2c-algo-bit,i2c-smbus");


MODULE_INFO(srcversion, "1E4873AD8A563AD197C5FCD");
