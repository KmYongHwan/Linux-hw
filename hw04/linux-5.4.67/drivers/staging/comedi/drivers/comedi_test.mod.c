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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0xdc7b4bf3, "comedi_driver_unregister" },
	{ 0x5a8b0caa, "comedi_auto_unconfig" },
	{ 0x8f1e938c, "class_destroy" },
	{ 0x8aeb7a6b, "device_destroy" },
	{ 0xf6039668, "comedi_auto_config" },
	{ 0x88e96942, "device_create" },
	{ 0x66414bc7, "__class_create" },
	{ 0xc5850110, "printk" },
	{ 0x53d24fc5, "comedi_driver_register" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x24d273d1, "add_timer" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x548b84ec, "comedi_buf_write_samples" },
	{ 0x15d64b25, "comedi_nsamples_left" },
	{ 0xd068078a, "comedi_buf_read_samples" },
	{ 0x47b05bb0, "comedi_inc_scan_progress" },
	{ 0xa3dfb941, "comedi_buf_read_free" },
	{ 0xd768db80, "comedi_buf_read_alloc" },
	{ 0x2aa6cf6b, "comedi_nscans_left" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xa236be2f, "comedi_handle_events" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x76c6e165, "comedi_alloc_subdevices" },
	{ 0x27fbb5a5, "comedi_alloc_devpriv" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi");


MODULE_INFO(srcversion, "3A560140ACD5E842FDC4574");
