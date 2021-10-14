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
	{ 0xdefbea52, "default_llseek" },
	{ 0xf7871355, "parport_unregister_driver" },
	{ 0x69539117, "__parport_register_driver" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x727ea304, "charlcd_poke" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x37a0cba, "kfree" },
	{ 0x47fda759, "misc_register" },
	{ 0x9166fada, "strncpy" },
	{ 0x349cba85, "strchr" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9192a401, "charlcd_register" },
	{ 0xa2a58bbe, "charlcd_alloc" },
	{ 0xc4963523, "parport_claim" },
	{ 0xb0a23144, "parport_register_dev_model" },
	{ 0xc5850110, "printk" },
	{ 0x343f1816, "misc_deregister" },
	{ 0xd0cc2e18, "charlcd_free" },
	{ 0xac53a91b, "charlcd_unregister" },
	{ 0xc65846c4, "parport_unregister_device" },
	{ 0x9eb4f9a2, "parport_release" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "parport,charlcd");


MODULE_INFO(srcversion, "5E260C3F571C085F46AB2AB");
