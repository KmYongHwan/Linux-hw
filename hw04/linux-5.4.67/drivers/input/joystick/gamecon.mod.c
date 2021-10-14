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
	{ 0x442639ef, "param_ops_uint" },
	{ 0xf7871355, "parport_unregister_driver" },
	{ 0x69539117, "__parport_register_driver" },
	{ 0x5ada0011, "input_event" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xbb77e50, "input_ff_create_memless" },
	{ 0x2a26e84c, "input_free_device" },
	{ 0x6cc0246e, "input_set_abs_params" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xeebd5754, "input_allocate_device" },
	{ 0xff76d558, "input_register_device" },
	{ 0xa89177c8, "input_set_capability" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xb0a23144, "parport_register_dev_model" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc4963523, "parport_claim" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x9eb4f9a2, "parport_release" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x37a0cba, "kfree" },
	{ 0xc65846c4, "parport_unregister_device" },
	{ 0x3f69beeb, "input_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "parport,ff-memless");


MODULE_INFO(srcversion, "DE0391E5AFA12FF4369CF05");
