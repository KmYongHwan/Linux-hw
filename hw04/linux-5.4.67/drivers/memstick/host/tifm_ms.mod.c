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
	{ 0xf894e26, "tifm_unregister_driver" },
	{ 0xc4dab587, "tifm_register_driver" },
	{ 0x35173b6e, "tifm_eject" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xba312d7b, "current_task" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x1fb59fdd, "tifm_map_sg" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc5850110, "printk" },
	{ 0xc1c110c9, "memstick_add_host" },
	{ 0xc5e049a4, "tifm_has_ms_pif" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3eee3c2e, "memstick_alloc_host" },
	{ 0xc17cabb9, "tifm_unmap_sg" },
	{ 0xa8ff0101, "memstick_free_host" },
	{ 0x95d79dbf, "memstick_remove_host" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x38a70269, "memstick_next_req" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x3c10c460, "memstick_suspend_host" },
	{ 0x45a77022, "memstick_resume_host" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "tifm_core,memstick");


MODULE_INFO(srcversion, "B3210FFB9D6C76EEC0E93E2");
